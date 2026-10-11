# Packaging Kyo

Notes for distribution packagers. End-user install docs live in the
[README](README.md) and at [docs.kyo.dev](https://docs.kyo.dev/kyo/getting-started/installation/).

## Package description

Use this exact short description for package metadata (`pkgdesc`, `Summary`,
AppStream, etc.):

> A sleek, customizable desktop shell crafted for Wayland.

Do not substitute shorter or alternate blurbs (“lightweight Wayland bar”,
“status bar”, ...). Kyo is a full desktop shell (bars, dock, launcher,
notifications, lock screen, wallpaper, settings, ...), not a bar-only tool.

## Packaged distributions

v5 is already packaged for:

- Arch Linux
- NixOS
- Fedora
- openSUSE
- KaOS
- Gentoo
- GNU Guix
- Debian (including Ubuntu)

[Repology](https://repology.org/project/kyo/versions) is a useful at-a-glance
check, but it only covers repositories it indexes (and may still list v4 as
`kyo-shell`). It is not a complete inventory of community packaging.

## Identity

| | |
|---|---|
| Name | `kyo` |
| Homepage | https://github.com/kyo-dev/kyo |
| Docs | https://docs.kyo.dev |
| License | MIT ([LICENSE](LICENSE)); also see vendored licenses under `third_party/` for SPDX completeness |
| Version | Meson `project(... version: ...)` in [`meson.build`](meson.build) |
| Binary | `kyo` |
| Desktop entry | `dev.kyo.Kyo.desktop` |
| Icon | `kyo` (`share/icons/hicolor/scalable/apps/kyo.svg`) |

## Maintenance Policy

Releases strive to follow [semantic versioning](https://semver.org).
The latest version is the only actively maintained version.
No attempts are made to achieve overlapping lifecycles of major or minor versions.
Bug reports are required to be reproducible on the latest version.

## Architectures / libc

First-class targets:

- `x86_64` (amd64)
- `aarch64` (arm64)

Linux only. There is no intentional arch-specific code path; other little-endian
Linux arches may build if dependencies are available, but they are not
first-class supported.

**musl**: known to build (e.g. Alpine / Void musl). Not first-class tested.
`jemalloc` is glibc-only, on musl leave `-Djemalloc=disabled` (or `auto`, which
skips it).

## Compilers / linkers

C++23 is required.

| Toolchain | Minimum | Notes |
|---|---|---|
| GCC + libstdc++ | **GCC 13+** | Default on most distros |
| Clang + libstdc++ or libc++ | **Clang 16+** | libc++ needs Meson’s experimental-library flags (already wired in `meson.build`) |

Debian 12 “bookworm” needs a newer toolchain than the default `g++` (e.g.
`g++-13` with `CXX=g++-13`).

No special linker is required. The default linker from the compiler driver is
fine (**GNU ld** / gold, **lld**, **mold** via `-fuse-ld=` all work). Release
builds pass `-Wl,--gc-sections` and `-Wl,--as-needed`, which those linkers
support.

## Build

- Build system: [Meson](https://mesonbuild.com/) + Ninja. The repo’s
  [`justfile`](justfile) is convenience only; packaging can call Meson
  directly.
- Language / toolchain: see [Compilers / linkers](#compilers--linkers).
- Recommended: `meson setup build --buildtype=release`, then compile/install.
- Do **not** enable `-Dnative_optimizations=true` for distro packages (CPU-local
  codegen; not portable).
- Tests: `-Dtests=disabled` (or leave `auto`, which skips tests for release).
- `jemalloc`: recommended on glibc; Meson feature option `-Djemalloc=auto|enabled|disabled`.
  Only used on glibc builds.

Prefix/datadir are baked into the binary via `KYO_INSTALL_PREFIX` /
`KYO_INSTALL_DATADIR`. Install with the same prefix you configured.

### Installed layout

```text
<prefix>/bin/kyo
<prefix>/share/kyo/assets/...
<prefix>/share/applications/dev.kyo.Kyo.desktop
<prefix>/share/icons/hicolor/scalable/apps/kyo.svg
```

The shipped `assets/` tree is **required at runtime**. Shipping only the binary
breaks fonts, translations, templates, glyphs, and sounds.

### Runtime asset lookup

Besides the prefix layout above, portable bundle layouts are supported:

```text
bundle/
  kyo
  assets/
```

```text
bundle/
  bin/kyo
  share/kyo/assets/
```

Kyo resolves the asset root in this order:

1. `KYO_ASSETS_DIR` (a warning is logged if it is set but invalid)
2. `assets/` next to the executable
3. `assets/` one level above the executable (this is how a `build-debug/`
   binary finds the source tree's `assets/`)
4. `../<datadir>/kyo/assets` relative to the executable, when the
   configured Meson `datadir` is relative
5. `../share/kyo/assets` relative to the executable
6. the compiled install path from Meson (`<prefix>/<datadir>/kyo/assets`)

A candidate is only accepted if it contains `emoji.json`,
`fonts/kyo-tabler.ttf`, `templates/builtin.toml`, and
`translations/en.json`. If none qualifies, Kyo logs a warning and uses the
compiled install path.

Not shipped (don’t look for them in the install): AppStream / metainfo XML, man
pages, systemd units.

### Shell completions

Static completion files are not shipped. Generate them from the freshly built
binary and install them in the distribution's completion directories:

```text
./build-<mode>/kyo completions bash  → share/bash-completion/completions/kyo
./build-<mode>/kyo completions zsh   → share/zsh/site-functions/_kyo
./build-<mode>/kyo completions fish  → share/fish/vendor_completions.d/kyo.fish
```

This is intentionally a packaging step rather than a Meson install rule:
executing the target binary during installation would break cross-compilation.

## Dependencies

No Qt or GTK. UI is Wayland + OpenGL ES (EGL/GLES, or `libepoxy` as a fallback
when separate EGL/GLES packages are missing).

### Build-time (required)

Canonical list is the `dependency(...)` / header checks in
[`meson.build`](meson.build). Distro package names differ; [BUILDING.md](BUILDING.md)
has copy-paste install lines for common distros.

Notes packagers hit often:

- **stb** must provide `stb/stb_image_resize2.h` (and `stb/stb_image_write.h`).
  Older packages that only ship `stb_image_resize` are not enough. Meson fails
  the configure check if `stb_image_resize2` is missing.
- Meson requires **WirePlumber 0.5** (`wireplumber-0.5` pkg-config). 0.4 is not
  enough.

### Vendored (no system package)

Shipped under `third_party/`: Wuffs, Luau, fzy, Material Color Utilities.
Each carries its own license file beside the code.

### Runtime

| Dependency | Role |
|---|---|
| PipeWire **daemon** (+ WirePlumber 0.5) | Audio, volume OSD, privacy indicators, spectrum. Libraries alone are not enough; without a running daemon those features stay off. |
| PAM (`login` service by default) | Lock screen authentication |
| Fontconfig / fonts | Text rendering (users still need usable fonts installed) |
| `git` | Plugin git sources / auto-update invoke `git` on `PATH` |
| `upower` | Optional: battery / power devices |
| `ddcutil` | Optional: external monitor brightness |
| Secret Service provider | Optional but recommended for credential / encrypted-state persistence (GNOME Keyring, KWallet, KeePassXC, ...). `libsecret` is only the client library; without a session provider those features cannot persist secrets. |
| `sound-theme-freedesktop` | Shell sounds |

## Startup and IPC

No systemd user unit is shipped. Typical startup is compositor autostart or the
desktop entry (`kyo --daemon`). Control a running instance with
`kyo msg ...` (Unix socket under `XDG_RUNTIME_DIR`).

Keep the `.desktop` daemon Exec unless you intentionally package a different
session integration. Prefer the canonical description above for `Comment=` /
AppStream summary as well.

## Session conflicts

On non-Plasma sessions Kyo provides and registers:

- `org.freedesktop.Notifications`
- `org.kde.StatusNotifierWatcher` (system tray host)

Do not run it alongside another notification daemon or StatusNotifier host
(mako, dunst, swaync, waybar-as-host, ...) unless those are disabled. On Plasma,
Kyo integrates with Plasma's notification / tray paths instead of claiming
the freedesktop Notifications name.

## User data paths

| Kind | Default |
|---|---|
| Config | `$XDG_CONFIG_HOME/kyo` (`~/.config/kyo`), e.g. `config.toml` |
| State | `$XDG_STATE_HOME/kyo` (`~/.local/state/kyo`), e.g. `settings.toml`, caches |
| Data | `$XDG_DATA_HOME/kyo` (`~/.local/share/kyo`) |
| Logs | `$XDG_CACHE_HOME/kyo` (`~/.cache/kyo`) |

Override bases with `KYO_CONFIG_HOME`, `KYO_STATE_HOME`,
`KYO_DATA_HOME` (each still appends `/kyo`).

## What Kyo is not

- Not a compositor, display manager, or greeter. Greeter support is
  [kyo-greeter](https://github.com/kyo-dev/kyo-greeter).
- Not a replacement for file managers, screen casting, or drive mounting.
- Compositor support varies (protocols / IPC). See the compositor docs for
  [Niri](https://docs.kyo.dev/kyo/compositor-settings/niri/),
  [Hyprland](https://docs.kyo.dev/kyo/compositor-settings/hyprland/),
  [Sway / Scroll](https://docs.kyo.dev/kyo/compositor-settings/sway-scroll/),
  [Mango](https://docs.kyo.dev/kyo/compositor-settings/mango/),
  [Labwc](https://docs.kyo.dev/kyo/compositor-settings/labwc/), and
  [KDE Plasma](https://docs.kyo.dev/kyo/compositor-settings/kde/).

## Versioning

Prefer packaging **tagged releases** rather than random `main` snapshots unless
you maintain a `-git` / nightly package on purpose.

## Contact

- Issues: https://github.com/kyo-dev/kyo/issues
- Discord: https://discord.kyo.dev
