{
  config,
  pkgs,
  lib,
  ...
}:
let
  inherit (lib.modules) mkIf;
  inherit (lib.options) mkEnableOption mkOption;
  inherit (lib.attrsets) mapAttrs mapAttrs' attrValues;
  inherit (lib.lists) optional;

  cfg = config.programs.kyo;
  toml = pkgs.formats.toml { };
  json = pkgs.formats.json { };

  configToml =
    let
      rawConfig = toml.generate "config.toml" cfg.settings;
    in
    if cfg.package != null && cfg.validateConfig then
      pkgs.runCommand "kyo-config" { } ''
        ${lib.getExe cfg.package} config validate ${rawConfig}
        cp ${rawConfig} $out
      ''
    else
      rawConfig;

  paletteFiles = mapAttrs (
    name: palette: json.generate "${name}-palette.json" palette
  ) cfg.customPalettes;
in
{
  options.programs.kyo = {
    enable = mkEnableOption "Whether to enable kyo, a lightweight Wayland shell and bar.";

    systemd = {
      enable = mkEnableOption "Enables a systemd user service for kyo.";

      target = mkOption {
        type = lib.types.str;
        default = "graphical-session.target";
        example = "hyprland-session.target";
        description = "The systemd target for the kyo service.";
      };
    };

    package = mkOption {
      type = lib.types.nullOr lib.types.package;
      description = "The kyo package to use.";
    };

    validateConfig = mkOption {
      type = lib.types.bool;
      default = true;
      description = "Validate the configuration file at build time.";
    };

    settings = mkOption {
      type = toml.type;
      default = { };
      description = ''
        Configuration written to {file}`$XDG_CONFIG_HOME/kyo/config.toml`.
        See <https://docs.kyo.dev/kyo/configuration/> for more information and examples.
      '';
      example = lib.literalExpression ''
        shell = {
          font = "JetBrainsMono Nerd Font";
          settings_show_advanced = true;
        };

        theme = {
          mode = "dark";
          source = "builtin";
          builtin = "Catppuccin";
        };
      '';
    };

    customPalettes = mkOption {
      type = json.type;
      default = { };
      description = ''
        Custom color palettes written to {file}`$XDG_CONFIG_HOME/kyo/palettes/<name>.json`.
        See <https://docs.kyo.dev/kyo/theming/palette/#custom-palette-files> for more information.
      '';
      example = lib.literalExpression ''
        cherry-blossom = {
          dark = {
            mPrimary = "#F2C1D4";
            mOnPrimary = "#2A1B21";
            mSecondary = "#FFD6E2";
            ...
          };
        };
      '';
    };
  };

  config = mkIf cfg.enable {
    packages = optional (cfg.package != null) cfg.package;

    systemd.services.kyo = mkIf (cfg.systemd.enable) {
      description = "Kyo - A lightweight Wayland shell and bar";
      documentation = [ "https://docs.kyo.dev/kyo/" ];
      partOf = [ cfg.systemd.target ];
      after = [ cfg.systemd.target ];
      wantedBy = [ cfg.systemd.target ];
      # without this the service will have the default
      # Environment="PATH=coreutils:…", clobbering the PATH that the DE
      # imported into the user manager.
      enableDefaultPath = false;
      restartTriggers = [
        cfg.package
      ]
      ++ optional (cfg.settings != { }) configToml
      ++ attrValues paletteFiles;
      serviceConfig = {
        ExecStart = lib.getExe cfg.package;
        Restart = "on-failure";
      };
    };

    xdg.config.files = lib.mkMerge [
      (mkIf (cfg.settings != { }) {
        "kyo/config.toml".source = configToml;
      })
      (mapAttrs' (
        name: source: lib.nameValuePair "kyo/palettes/${name}.json" { inherit source; }
      ) paletteFiles)
    ];

    assertions = [
      {
        assertion = !cfg.systemd.enable || cfg.package != null;
        message = "programs.kyo.package cannot be null when programs.kyo.systemd.enable is true";
      }
    ];
  };

  _class = "hjem";
}
