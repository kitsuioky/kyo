#include "theme/builtin_palettes.h"

#include "theme/fixed_palette.h"

#include <array>
#include <string_view>

namespace kyo::theme {

  namespace {

    constexpr std::array<BuiltinPalette, 13> kPalettes =
        {
            {
                {
                    .name = "Kyo",
                    .dark =
                        FixedPaletteMode{
                            .palette =
                                Palette{
                                    .primary = hex("#FA0050"),
                                    .onPrimary = hex("#FFFFFF"),
                                    .secondary = hex("#FF7A9E"),
                                    .onSecondary = hex("#2A0010"),
                                    .tertiary = hex("#FF9B6A"),
                                    .onTertiary = hex("#2E1000"),
                                    .error = hex("#D12323"),
                                    .onError = hex("#FFFFFF"),
                                    .surface = hex("#121214"),
                                    .onSurface = hex("#ECECEF"),
                                    .surfaceVariant = hex("#1D1D21"),
                                    .onSurfaceVariant = hex("#A9A9B2"),
                                    .outline = hex("#38383F"),
                                    .shadow = hex("#000000"),
                                    .hover = hex("#2A2A30"),
                                    .onHover = hex("#FFFFFF"),
                                },
                            .terminal =
                                TerminalPalette{
                                    .normal =
                                        TerminalAnsiColors{
                                            .black = hex("#1D1D21"),
                                            .red = hex("#FA0050"),
                                            .green = hex("#5FD38D"),
                                            .yellow = hex("#F5C451"),
                                            .blue = hex("#6EA8FF"),
                                            .magenta = hex("#FF5C9E"),
                                            .cyan = hex("#5CD6D6"),
                                            .white = hex("#D6D6DB"),
                                        },
                                    .bright =
                                        TerminalAnsiColors{
                                            .black = hex("#4A4A52"),
                                            .red = hex("#FF4D83"),
                                            .green = hex("#86E8AE"),
                                            .yellow = hex("#FFD97A"),
                                            .blue = hex("#94BFFF"),
                                            .magenta = hex("#FF8FBE"),
                                            .cyan = hex("#8CE8E8"),
                                            .white = hex("#FFFFFF"),
                                        },
                                    .foreground = hex("#ECECEF"),
                                    .background = hex("#121214"),
                                    .selectionFg = hex("#FFFFFF"),
                                    .selectionBg = hex("#5A1A30"),
                                    .cursorText = hex("#121214"),
                                    .cursor = hex("#FA0050"),
                                },
                        },
                    .light =
                        FixedPaletteMode{
                            .palette =
                                Palette{
                                    .primary = hex("#D90043"),
                                    .onPrimary = hex("#FFFFFF"),
                                    .secondary = hex("#B8305A"),
                                    .onSecondary = hex("#FFFFFF"),
                                    .tertiary = hex("#B8541F"),
                                    .onTertiary = hex("#FFFFFF"),
                                    .error = hex("#D12323"),
                                    .onError = hex("#FFFFFF"),
                                    .surface = hex("#FBF8F9"),
                                    .onSurface = hex("#1A1417"),
                                    .surfaceVariant = hex("#F0E9EC"),
                                    .onSurfaceVariant = hex("#5E5258"),
                                    .outline = hex("#CFC3C8"),
                                    .shadow = hex("#000000"),
                                    .hover = hex("#E8DDE1"),
                                    .onHover = hex("#1A1417"),
                                },
                            .terminal =
                                TerminalPalette{
                                    .normal =
                                        TerminalAnsiColors{
                                            .black = hex("#1A1417"),
                                            .red = hex("#D90043"),
                                            .green = hex("#2E8B57"),
                                            .yellow = hex("#B8860B"),
                                            .blue = hex("#2F6FD0"),
                                            .magenta = hex("#C2185B"),
                                            .cyan = hex("#1E8A8A"),
                                            .white = hex("#D9CFD3"),
                                        },
                                    .bright =
                                        TerminalAnsiColors{
                                            .black = hex("#5E5258"),
                                            .red = hex("#FA0050"),
                                            .green = hex("#3FAE74"),
                                            .yellow = hex("#D9A21B"),
                                            .blue = hex("#4F8DEB"),
                                            .magenta = hex("#E0407F"),
                                            .cyan = hex("#2FA9A9"),
                                            .white = hex("#FFFFFF"),
                                        },
                                    .foreground = hex("#1A1417"),
                                    .background = hex("#FBF8F9"),
                                    .selectionFg = hex("#1A1417"),
                                    .selectionBg = hex("#F7C5D3"),
                                    .cursorText = hex("#FBF8F9"),
                                    .cursor = hex("#D90043"),
                                },
                        },
                },
                {
                    .name = "Butterfly",
                    .dark =
                        FixedPaletteMode{
                            .palette =
                                Palette{
                                    .primary = hex("#B794F6"),
                                    .onPrimary = hex("#150F26"),
                                    .secondary = hex("#E9A5F5"),
                                    .onSecondary = hex("#150F26"),
                                    .tertiary = hex("#8FD0FF"),
                                    .onTertiary = hex("#150F26"),
                                    .error = hex("#D12323"),
                                    .onError = hex("#FFFFFF"),
                                    .surface = hex("#15121F"),
                                    .onSurface = hex("#EEE9FB"),
                                    .surfaceVariant = hex("#1F1A2E"),
                                    .onSurfaceVariant = hex("#B1A8CC"),
                                    .outline = hex("#3B3354"),
                                    .shadow = hex("#000000"),
                                    .hover = hex("#2B2442"),
                                    .onHover = hex("#FFFFFF"),
                                },
                            .terminal =
                                TerminalPalette{
                                    .normal =
                                        TerminalAnsiColors{
                                            .black = hex("#1F1A2E"),
                                            .red = hex("#E5484D"),
                                            .green = hex("#7DDBA3"),
                                            .yellow = hex("#F2D272"),
                                            .blue = hex("#8FB4FF"),
                                            .magenta = hex("#E9A5F5"),
                                            .cyan = hex("#8FD0FF"),
                                            .white = hex("#D9D3EC"),
                                        },
                                    .bright =
                                        TerminalAnsiColors{
                                            .black = hex("#4A4163"),
                                            .red = hex("#FF6B73"),
                                            .green = hex("#A3EBC1"),
                                            .yellow = hex("#FBE49A"),
                                            .blue = hex("#B3CDFF"),
                                            .magenta = hex("#F3C6FA"),
                                            .cyan = hex("#B5E3FF"),
                                            .white = hex("#FFFFFF"),
                                        },
                                    .foreground = hex("#EEE9FB"),
                                    .background = hex("#15121F"),
                                    .selectionFg = hex("#FFFFFF"),
                                    .selectionBg = hex("#46386E"),
                                    .cursorText = hex("#15121F"),
                                    .cursor = hex("#B794F6"),
                                },
                        },
                    .light =
                        FixedPaletteMode{
                            .palette =
                                Palette{
                                    .primary = hex("#7C4DDB"),
                                    .onPrimary = hex("#FFFFFF"),
                                    .secondary = hex("#A93FA0"),
                                    .onSecondary = hex("#FFFFFF"),
                                    .tertiary = hex("#1E78B8"),
                                    .onTertiary = hex("#FFFFFF"),
                                    .error = hex("#D12323"),
                                    .onError = hex("#FFFFFF"),
                                    .surface = hex("#F8F5FF"),
                                    .onSurface = hex("#1D1630"),
                                    .surfaceVariant = hex("#EFE9FC"),
                                    .onSurfaceVariant = hex("#5B5075"),
                                    .outline = hex("#CFC3EA"),
                                    .shadow = hex("#000000"),
                                    .hover = hex("#E4DAF7"),
                                    .onHover = hex("#1D1630"),
                                },
                            .terminal =
                                TerminalPalette{
                                    .normal =
                                        TerminalAnsiColors{
                                            .black = hex("#1D1630"),
                                            .red = hex("#C62828"),
                                            .green = hex("#2E8B57"),
                                            .yellow = hex("#9A7B0A"),
                                            .blue = hex("#3B63D6"),
                                            .magenta = hex("#A93FA0"),
                                            .cyan = hex("#1E78B8"),
                                            .white = hex("#DCD4EE"),
                                        },
                                    .bright =
                                        TerminalAnsiColors{
                                            .black = hex("#5B5075"),
                                            .red = hex("#E5484D"),
                                            .green = hex("#3FAE74"),
                                            .yellow = hex("#C79A12"),
                                            .blue = hex("#5C82F0"),
                                            .magenta = hex("#C860BD"),
                                            .cyan = hex("#3A97D6"),
                                            .white = hex("#FFFFFF"),
                                        },
                                    .foreground = hex("#1D1630"),
                                    .background = hex("#F8F5FF"),
                                    .selectionFg = hex("#1D1630"),
                                    .selectionBg = hex("#D9C9F8"),
                                    .cursorText = hex("#F8F5FF"),
                                    .cursor = hex("#7C4DDB"),
                                },
                        },
                },
                {
                    .name = "Yagami",
                    .dark =
                        FixedPaletteMode{
                            .palette =
                                Palette{
                                    .primary = hex("#BD3DFF"),
                                    .onPrimary = hex("#0B0612"),
                                    .secondary = hex("#00F0FF"),
                                    .onSecondary = hex("#0B0612"),
                                    .tertiary = hex("#FCEE0A"),
                                    .onTertiary = hex("#0B0612"),
                                    .error = hex("#FF1F4B"),
                                    .onError = hex("#0B0612"),
                                    .surface = hex("#0B0612"),
                                    .onSurface = hex("#E8E0F5"),
                                    .surfaceVariant = hex("#150C22"),
                                    .onSurfaceVariant = hex("#9F8FC0"),
                                    .outline = hex("#3A1F5C"),
                                    .shadow = hex("#000000"),
                                    .hover = hex("#241039"),
                                    .onHover = hex("#FFFFFF"),
                                },
                            .terminal =
                                TerminalPalette{
                                    .normal =
                                        TerminalAnsiColors{
                                            .black = hex("#150C22"),
                                            .red = hex("#FF1F4B"),
                                            .green = hex("#39FF88"),
                                            .yellow = hex("#FCEE0A"),
                                            .blue = hex("#5B7CFF"),
                                            .magenta = hex("#BD3DFF"),
                                            .cyan = hex("#00F0FF"),
                                            .white = hex("#D6CCEA"),
                                        },
                                    .bright =
                                        TerminalAnsiColors{
                                            .black = hex("#3A1F5C"),
                                            .red = hex("#FF5C7C"),
                                            .green = hex("#7DFFB0"),
                                            .yellow = hex("#FFF566"),
                                            .blue = hex("#8FA5FF"),
                                            .magenta = hex("#D480FF"),
                                            .cyan = hex("#66F7FF"),
                                            .white = hex("#FFFFFF"),
                                        },
                                    .foreground = hex("#E8E0F5"),
                                    .background = hex("#0B0612"),
                                    .selectionFg = hex("#FFFFFF"),
                                    .selectionBg = hex("#4A1F78"),
                                    .cursorText = hex("#0B0612"),
                                    .cursor = hex("#00F0FF"),
                                },
                        },
                    .light =
                        FixedPaletteMode{
                            .palette =
                                Palette{
                                    .primary = hex("#8A1FD6"),
                                    .onPrimary = hex("#FFFFFF"),
                                    .secondary = hex("#007C89"),
                                    .onSecondary = hex("#FFFFFF"),
                                    .tertiary = hex("#7A6C00"),
                                    .onTertiary = hex("#FFFFFF"),
                                    .error = hex("#D0002F"),
                                    .onError = hex("#FFFFFF"),
                                    .surface = hex("#F6F1FC"),
                                    .onSurface = hex("#1A0F2B"),
                                    .surfaceVariant = hex("#EBE2F7"),
                                    .onSurfaceVariant = hex("#5A4A78"),
                                    .outline = hex("#CDBBE6"),
                                    .shadow = hex("#000000"),
                                    .hover = hex("#E0D2F2"),
                                    .onHover = hex("#1A0F2B"),
                                },
                            .terminal =
                                TerminalPalette{
                                    .normal =
                                        TerminalAnsiColors{
                                            .black = hex("#1A0F2B"),
                                            .red = hex("#D0002F"),
                                            .green = hex("#1B8F55"),
                                            .yellow = hex("#7A6C00"),
                                            .blue = hex("#3350D0"),
                                            .magenta = hex("#8A1FD6"),
                                            .cyan = hex("#007C89"),
                                            .white = hex("#D8CDEA"),
                                        },
                                    .bright =
                                        TerminalAnsiColors{
                                            .black = hex("#5A4A78"),
                                            .red = hex("#F0204A"),
                                            .green = hex("#2FB36E"),
                                            .yellow = hex("#A39200"),
                                            .blue = hex("#5575F0"),
                                            .magenta = hex("#A642F0"),
                                            .cyan = hex("#12A3B3"),
                                            .white = hex("#FFFFFF"),
                                        },
                                    .foreground = hex("#1A0F2B"),
                                    .background = hex("#F6F1FC"),
                                    .selectionFg = hex("#1A0F2B"),
                                    .selectionBg = hex("#D9C2F2"),
                                    .cursorText = hex("#F6F1FC"),
                                    .cursor = hex("#8A1FD6"),
                                },
                        },
                },
                {
                    .name = "Cyberpunk",
                    .dark =
                        FixedPaletteMode{
                            .palette =
                                Palette{
                                    .primary = hex("#FC0034"),
                                    .onPrimary = hex("#FFFFFF"),
                                    .secondary = hex("#2EE6E0"),
                                    .onSecondary = hex("#06121A"),
                                    .tertiary = hex("#B07CFF"),
                                    .onTertiary = hex("#12062A"),
                                    .error = hex("#D12323"),
                                    .onError = hex("#FFFFFF"),
                                    .surface = hex("#0E0618"),
                                    .onSurface = hex("#EDE6FF"),
                                    .surfaceVariant = hex("#170B2A"),
                                    .onSurfaceVariant = hex("#9AA0D6"),
                                    .outline = hex("#34204F"),
                                    .shadow = hex("#000000"),
                                    .hover = hex("#26123F"),
                                    .onHover = hex("#FFFFFF"),
                                },
                            .terminal =
                                TerminalPalette{
                                    .normal =
                                        TerminalAnsiColors{
                                            .black = hex("#170B2A"),
                                            .red = hex("#FC0034"),
                                            .green = hex("#33FF88"),
                                            .yellow = hex("#FFD43B"),
                                            .blue = hex("#4C7DFF"),
                                            .magenta = hex("#B07CFF"),
                                            .cyan = hex("#2EE6E0"),
                                            .white = hex("#D9D2EE"),
                                        },
                                    .bright =
                                        TerminalAnsiColors{
                                            .black = hex("#34204F"),
                                            .red = hex("#FF4D6D"),
                                            .green = hex("#7DFFB0"),
                                            .yellow = hex("#FFE27A"),
                                            .blue = hex("#8AA6FF"),
                                            .magenta = hex("#CBA6FF"),
                                            .cyan = hex("#7DF2EE"),
                                            .white = hex("#FFFFFF"),
                                        },
                                    .foreground = hex("#EDE6FF"),
                                    .background = hex("#0E0618"),
                                    .selectionFg = hex("#FFFFFF"),
                                    .selectionBg = hex("#4A1F6E"),
                                    .cursorText = hex("#0E0618"),
                                    .cursor = hex("#2EE6E0"),
                                },
                        },
                    .light =
                        FixedPaletteMode{
                            .palette =
                                Palette{
                                    .primary = hex("#D1002C"),
                                    .onPrimary = hex("#FFFFFF"),
                                    .secondary = hex("#00808A"),
                                    .onSecondary = hex("#FFFFFF"),
                                    .tertiary = hex("#6B3FD4"),
                                    .onTertiary = hex("#FFFFFF"),
                                    .error = hex("#D12323"),
                                    .onError = hex("#FFFFFF"),
                                    .surface = hex("#F5F0FB"),
                                    .onSurface = hex("#1A1030"),
                                    .surfaceVariant = hex("#E9E0F5"),
                                    .onSurfaceVariant = hex("#5A4F7A"),
                                    .outline = hex("#CFC2E6"),
                                    .shadow = hex("#000000"),
                                    .hover = hex("#DDD0F0"),
                                    .onHover = hex("#1A1030"),
                                },
                            .terminal =
                                TerminalPalette{
                                    .normal =
                                        TerminalAnsiColors{
                                            .black = hex("#1A1030"),
                                            .red = hex("#D1002C"),
                                            .green = hex("#1E9A5A"),
                                            .yellow = hex("#A07A00"),
                                            .blue = hex("#2F5FD0"),
                                            .magenta = hex("#6B3FD4"),
                                            .cyan = hex("#00808A"),
                                            .white = hex("#D8CEEA"),
                                        },
                                    .bright =
                                        TerminalAnsiColors{
                                            .black = hex("#5A4F7A"),
                                            .red = hex("#F0204A"),
                                            .green = hex("#2FB36E"),
                                            .yellow = hex("#C79A12"),
                                            .blue = hex("#5575F0"),
                                            .magenta = hex("#8A62F0"),
                                            .cyan = hex("#12A3B3"),
                                            .white = hex("#FFFFFF"),
                                        },
                                    .foreground = hex("#1A1030"),
                                    .background = hex("#F5F0FB"),
                                    .selectionFg = hex("#1A1030"),
                                    .selectionBg = hex("#D9C8F2"),
                                    .cursorText = hex("#F5F0FB"),
                                    .cursor = hex("#D1002C"),
                                },
                        },
                },
                {
                    .name = "Ayu",
                    .dark =
                        FixedPaletteMode{
                            .palette =
                                Palette{
                                    .primary = hex("#E6B450"),
                                    .onPrimary = hex("#0B0E14"),
                                    .secondary = hex("#AAD94C"),
                                    .onSecondary = hex("#0B0E14"),
                                    .tertiary = hex("#39BAE6"),
                                    .onTertiary = hex("#0B0E14"),
                                    .error = hex("#D95757"),
                                    .onError = hex("#0B0E14"),
                                    .surface = hex("#0B0E14"),
                                    .onSurface = hex("#D1D1C7"),
                                    .surfaceVariant = hex("#1e222a"),
                                    .onSurfaceVariant = hex("#8E959E"),
                                    .outline = hex("#565B66"),
                                    .shadow = hex("#000000"),
                                    .hover = hex("#39BAE6"),
                                    .onHover = hex("#0B0E14"),
                                },
                            .terminal =
                                TerminalPalette{
                                    .normal =
                                        TerminalAnsiColors{
                                            .black = hex("#11151c"),
                                            .red = hex("#ea6c73"),
                                            .green = hex("#7fd962"),
                                            .yellow = hex("#f9af4f"),
                                            .blue = hex("#53bdfa"),
                                            .magenta = hex("#cda1fa"),
                                            .cyan = hex("#90e1c6"),
                                            .white = hex("#c7c7c7"),
                                        },
                                    .bright =
                                        TerminalAnsiColors{
                                            .black = hex("#686868"),
                                            .red = hex("#f07178"),
                                            .green = hex("#aad94c"),
                                            .yellow = hex("#ffb454"),
                                            .blue = hex("#59c2ff"),
                                            .magenta = hex("#d2a6ff"),
                                            .cyan = hex("#95e6cb"),
                                            .white = hex("#ffffff"),
                                        },
                                    .foreground = hex("#bfbdb6"),
                                    .background = hex("#0b0e14"),
                                    .selectionFg = hex("#0b0e14"),
                                    .selectionBg = hex("#409fff"),
                                    .cursorText = hex("#0b0e14"),
                                    .cursor = hex("#e6b450"),
                                },
                        },
                    .light =
                        FixedPaletteMode{
                            .palette =
                                Palette{
                                    .primary = hex("#FF8F40"),
                                    .onPrimary = hex("#F8F9FA"),
                                    .secondary = hex("#86B300"),
                                    .onSecondary = hex("#F8F9FA"),
                                    .tertiary = hex("#55B4D4"),
                                    .onTertiary = hex("#F8F9FA"),
                                    .error = hex("#E65050"),
                                    .onError = hex("#F8F9FA"),
                                    .surface = hex("#F8F9FA"),
                                    .onSurface = hex("#42474C"),
                                    .surfaceVariant = hex("#E4E6E9"),
                                    .onSurfaceVariant = hex("#6E757C"),
                                    .outline = hex("#8A9199"),
                                    .shadow = hex("#F8F9FA"),
                                    .hover = hex("#55B4D4"),
                                    .onHover = hex("#F8F9FA"),
                                },
                            .terminal =
                                TerminalPalette{
                                    .normal =
                                        TerminalAnsiColors{
                                            .black = hex("#000000"),
                                            .red = hex("#ea6c6d"),
                                            .green = hex("#6cbf43"),
                                            .yellow = hex("#eca944"),
                                            .blue = hex("#3199e1"),
                                            .magenta = hex("#9e75c7"),
                                            .cyan = hex("#46ba94"),
                                            .white = hex("#bababa"),
                                        },
                                    .bright =
                                        TerminalAnsiColors{
                                            .black = hex("#686868"),
                                            .red = hex("#f07171"),
                                            .green = hex("#86b300"),
                                            .yellow = hex("#f2ae49"),
                                            .blue = hex("#399ee6"),
                                            .magenta = hex("#a37acc"),
                                            .cyan = hex("#4cbf99"),
                                            .white = hex("#d1d1d1"),
                                        },
                                    .foreground = hex("#42474C"),
                                    .background = hex("#f8f9fa"),
                                    .selectionFg = hex("#f8f9fa"),
                                    .selectionBg = hex("#035bd6"),
                                    .cursorText = hex("#f8f9fa"),
                                    .cursor = hex("#ffaa33"),
                                },
                        },
                },
                {
                    .name = "Catppuccin",
                    .dark =
                        FixedPaletteMode{
                            .palette =
                                Palette{
                                    .primary = hex("#cba6f7"),
                                    .onPrimary = hex("#11111b"),
                                    .secondary = hex("#fab387"),
                                    .onSecondary = hex("#11111b"),
                                    .tertiary = hex("#94e2d5"),
                                    .onTertiary = hex("#11111b"),
                                    .error = hex("#f38ba8"),
                                    .onError = hex("#11111b"),
                                    .surface = hex("#1e1e2e"),
                                    .onSurface = hex("#cdd6f4"),
                                    .surfaceVariant = hex("#313244"),
                                    .onSurfaceVariant = hex("#a3b4eb"),
                                    .outline = hex("#4c4f69"),
                                    .shadow = hex("#11111b"),
                                    .hover = hex("#94e2d5"),
                                    .onHover = hex("#11111b"),
                                },
                            .terminal =
                                TerminalPalette{
                                    .normal =
                                        TerminalAnsiColors{
                                            .black = hex("#45475a"),
                                            .red = hex("#f38ba8"),
                                            .green = hex("#a6e3a1"),
                                            .yellow = hex("#f9e2af"),
                                            .blue = hex("#89b4fa"),
                                            .magenta = hex("#f5c2e7"),
                                            .cyan = hex("#94e2d5"),
                                            .white = hex("#a6adc8"),
                                        },
                                    .bright =
                                        TerminalAnsiColors{
                                            .black = hex("#585b70"),
                                            .red = hex("#f37799"),
                                            .green = hex("#89d88b"),
                                            .yellow = hex("#ebd391"),
                                            .blue = hex("#74a8fc"),
                                            .magenta = hex("#f2aede"),
                                            .cyan = hex("#6bd7ca"),
                                            .white = hex("#bac2de"),
                                        },
                                    .foreground = hex("#cdd6f4"),
                                    .background = hex("#1e1e2e"),
                                    .selectionFg = hex("#cdd6f4"),
                                    .selectionBg = hex("#585b70"),
                                    .cursorText = hex("#1e1e2e"),
                                    .cursor = hex("#f5e0dc"),
                                },
                        },
                    .light =
                        FixedPaletteMode{
                            .palette =
                                Palette{
                                    .primary = hex("#8839ef"),
                                    .onPrimary = hex("#eff1f5"),
                                    .secondary = hex("#fe640b"),
                                    .onSecondary = hex("#eff1f5"),
                                    .tertiary = hex("#40a02b"),
                                    .onTertiary = hex("#eff1f5"),
                                    .error = hex("#d20f39"),
                                    .onError = hex("#dce0e8"),
                                    .surface = hex("#eff1f5"),
                                    .onSurface = hex("#4c4f69"),
                                    .surfaceVariant = hex("#ccd0da"),
                                    .onSurfaceVariant = hex("#6c6f85"),
                                    .outline = hex("#a5adcb"),
                                    .shadow = hex("#dce0e8"),
                                    .hover = hex("#40a02b"),
                                    .onHover = hex("#eff1f5"),
                                },
                            .terminal =
                                TerminalPalette{
                                    .normal =
                                        TerminalAnsiColors{
                                            .black = hex("#bcc0cc"),
                                            .red = hex("#d20f39"),
                                            .green = hex("#40a02b"),
                                            .yellow = hex("#df8e1d"),
                                            .blue = hex("#1e66f5"),
                                            .magenta = hex("#ea76cb"),
                                            .cyan = hex("#179299"),
                                            .white = hex("#5c5f77"),
                                        },
                                    .bright =
                                        TerminalAnsiColors{
                                            .black = hex("#acb0be"),
                                            .red = hex("#d20f39"),
                                            .green = hex("#40a02b"),
                                            .yellow = hex("#df8e1d"),
                                            .blue = hex("#1e66f5"),
                                            .magenta = hex("#ea76cb"),
                                            .cyan = hex("#179299"),
                                            .white = hex("#6c6f85"),
                                        },
                                    .foreground = hex("#4c4f69"),
                                    .background = hex("#eff1f5"),
                                    .selectionFg = hex("#eff1f5"),
                                    .selectionBg = hex("#dc8a78"),
                                    .cursorText = hex("#eff1f5"),
                                    .cursor = hex("#dc8a78"),
                                },
                        },
                },
                {
                    .name = "Dracula",
                    .dark =
                        FixedPaletteMode{
                            .palette =
                                Palette{
                                    .primary = hex("#bd93f9"),
                                    .onPrimary = hex("#282A36"),
                                    .secondary = hex("#ff79c6"),
                                    .onSecondary = hex("#4e1d32"),
                                    .tertiary = hex("#8be9fd"),
                                    .onTertiary = hex("#003543"),
                                    .error = hex("#FF5555"),
                                    .onError = hex("#282A36"),
                                    .surface = hex("#282A36"),
                                    .onSurface = hex("#F8F8F2"),
                                    .surfaceVariant = hex("#44475A"),
                                    .onSurfaceVariant = hex("#d6d8e0"),
                                    .outline = hex("#5a5e77"),
                                    .shadow = hex("#282A36"),
                                    .hover = hex("#8be9fd"),
                                    .onHover = hex("#003543"),
                                },
                            .terminal =
                                TerminalPalette{
                                    .normal =
                                        TerminalAnsiColors{
                                            .black = hex("#21222c"),
                                            .red = hex("#ff5555"),
                                            .green = hex("#50fa7b"),
                                            .yellow = hex("#f1fa8c"),
                                            .blue = hex("#bd93f9"),
                                            .magenta = hex("#ff79c6"),
                                            .cyan = hex("#8be9fd"),
                                            .white = hex("#f8f8f2"),
                                        },
                                    .bright =
                                        TerminalAnsiColors{
                                            .black = hex("#6272a4"),
                                            .red = hex("#ff6e6e"),
                                            .green = hex("#69ff94"),
                                            .yellow = hex("#ffffa5"),
                                            .blue = hex("#d6acff"),
                                            .magenta = hex("#ff92df"),
                                            .cyan = hex("#a4ffff"),
                                            .white = hex("#ffffff"),
                                        },
                                    .foreground = hex("#f8f8f2"),
                                    .background = hex("#282a36"),
                                    .selectionFg = hex("#ffffff"),
                                    .selectionBg = hex("#44475a"),
                                    .cursorText = hex("#282a36"),
                                    .cursor = hex("#f8f8f2"),
                                },
                        },
                    .light =
                        FixedPaletteMode{
                            .palette =
                                Palette{
                                    .primary = hex("#8332f4"),
                                    .onPrimary = hex("#ffffff"),
                                    .secondary = hex("#ff1399"),
                                    .onSecondary = hex("#ffffff"),
                                    .tertiary = hex("#0398b9"),
                                    .onTertiary = hex("#ffffff"),
                                    .error = hex("#FF5555"),
                                    .onError = hex("#282A36"),
                                    .surface = hex("#f8f8f2"),
                                    .onSurface = hex("#282a36"),
                                    .surfaceVariant = hex("#e6e6ea"),
                                    .onSurfaceVariant = hex("#44475a"),
                                    .outline = hex("#cacad3"),
                                    .shadow = hex("#d6d8e0"),
                                    .hover = hex("#0398b9"),
                                    .onHover = hex("#ffffff"),
                                },
                            .terminal =
                                TerminalPalette{
                                    .normal =
                                        TerminalAnsiColors{
                                            .black = hex("#f8f8f2"),
                                            .red = hex("#ff5555"),
                                            .green = hex("#50fa7b"),
                                            .yellow = hex("#f1fa8c"),
                                            .blue = hex("#bd93f9"),
                                            .magenta = hex("#ff79c6"),
                                            .cyan = hex("#8be9fd"),
                                            .white = hex("#282a36"),
                                        },
                                    .bright =
                                        TerminalAnsiColors{
                                            .black = hex("#6272a4"),
                                            .red = hex("#ff6e6e"),
                                            .green = hex("#69ff94"),
                                            .yellow = hex("#ffffa5"),
                                            .blue = hex("#d6acff"),
                                            .magenta = hex("#ff92df"),
                                            .cyan = hex("#a4ffff"),
                                            .white = hex("#000000"),
                                        },
                                    .foreground = hex("#282a36"),
                                    .background = hex("#ffffff"),
                                    .selectionFg = hex("#ffffff"),
                                    .selectionBg = hex("#6272a4"),
                                    .cursorText = hex("#ffffff"),
                                    .cursor = hex("#282a36"),
                                },
                        },
                },
                {
                    .name = "Eldritch",
                    .dark =
                        FixedPaletteMode{
                            .palette =
                                Palette{
                                    .primary = hex("#37f499"),
                                    .onPrimary = hex("#171928"),
                                    .secondary = hex("#04d1f9"),
                                    .onSecondary = hex("#171928"),
                                    .tertiary = hex("#a48cf2"),
                                    .onTertiary = hex("#171928"),
                                    .error = hex("#f16c75"),
                                    .onError = hex("#171928"),
                                    .surface = hex("#212337"),
                                    .onSurface = hex("#ebfafa"),
                                    .surfaceVariant = hex("#292e42"),
                                    .onSurfaceVariant = hex("#ABB4DA"),
                                    .outline = hex("#3b4261"),
                                    .shadow = hex("#414868"),
                                    .hover = hex("#a48cf2"),
                                    .onHover = hex("#171928"),
                                },
                            .terminal =
                                TerminalPalette{
                                    .normal =
                                        TerminalAnsiColors{
                                            .black = hex("#21222c"),
                                            .red = hex("#f9515d"),
                                            .green = hex("#37f499"),
                                            .yellow = hex("#e9f941"),
                                            .blue = hex("#9071f4"),
                                            .magenta = hex("#f265b5"),
                                            .cyan = hex("#04d1f9"),
                                            .white = hex("#ebfafa"),
                                        },
                                    .bright =
                                        TerminalAnsiColors{
                                            .black = hex("#7081d0"),
                                            .red = hex("#f16c75"),
                                            .green = hex("#69F8B3"),
                                            .yellow = hex("#f1fc79"),
                                            .blue = hex("#a48cf2"),
                                            .magenta = hex("#FD92CE"),
                                            .cyan = hex("#66e4fd"),
                                            .white = hex("#ffffff"),
                                        },
                                    .foreground = hex("#ebfafa"),
                                    .background = hex("#212337"),
                                    .selectionFg = hex("#ebfafa"),
                                    .selectionBg = hex("#bf4f8e"),
                                    .cursorText = hex("#37f499"),
                                    .cursor = hex("#f8f8f2"),
                                },
                        },
                    .light =
                        FixedPaletteMode{
                            .palette =
                                Palette{
                                    .primary = hex("#fb5bb6"),
                                    .onPrimary = hex("#1e2029"),
                                    .secondary = hex("#0ad6ff"),
                                    .onSecondary = hex("#1e2029"),
                                    .tertiary = hex("#8a69f7"),
                                    .onTertiary = hex("#1e2029"),
                                    .error = hex("#fb5b66"),
                                    .onError = hex("#1e2029"),
                                    .surface = hex("#f0f3f4"),
                                    .onSurface = hex("#1e2029"),
                                    .surfaceVariant = hex("#d5d9db"),
                                    .onSurfaceVariant = hex("#1e2029"),
                                    .outline = hex("#c9cbcd"),
                                    .shadow = hex("#e2e6e8"),
                                    .hover = hex("#8a69f7"),
                                    .onHover = hex("#1e2029"),
                                },
                            .terminal =
                                TerminalPalette{
                                    .normal =
                                        TerminalAnsiColors{
                                            .black = hex("#d5d9db"),
                                            .red = hex("#a03040"),
                                            .green = hex("#1a9960"),
                                            .yellow = hex("#b3a010"),
                                            .blue = hex("#2a3590"),
                                            .magenta = hex("#8a2070"),
                                            .cyan = hex("#007a99"),
                                            .white = hex("#1e2029"),
                                        },
                                    .bright =
                                        TerminalAnsiColors{
                                            .black = hex("#c9cbcd"),
                                            .red = hex("#fb5b66"),
                                            .green = hex("#38ff9F"),
                                            .yellow = hex("#fff952"),
                                            .blue = hex("#5b73dc"),
                                            .magenta = hex("#fb5bb6"),
                                            .cyan = hex("#0ad6ff"),
                                            .white = hex("#1e2029"),
                                        },
                                    .foreground = hex("#1e2029"),
                                    .background = hex("#f0f3f4"),
                                    .selectionFg = hex("#1e2029"),
                                    .selectionBg = hex("#8a69f7"),
                                    .cursorText = hex("#1e2029"),
                                    .cursor = hex("#38ff9F"),
                                },
                        },
                },
                {
                    .name = "Gruvbox",
                    .dark =
                        FixedPaletteMode{
                            .palette =
                                Palette{
                                    .primary = hex("#b8bb26"),
                                    .onPrimary = hex("#282828"),
                                    .secondary = hex("#fabd2F"),
                                    .onSecondary = hex("#282828"),
                                    .tertiary = hex("#83a598"),
                                    .onTertiary = hex("#282828"),
                                    .error = hex("#fb4934"),
                                    .onError = hex("#282828"),
                                    .surface = hex("#282828"),
                                    .onSurface = hex("#fbf1c7"),
                                    .surfaceVariant = hex("#3c3836"),
                                    .onSurfaceVariant = hex("#ebdbb2"),
                                    .outline = hex("#57514e"),
                                    .shadow = hex("#282828"),
                                    .hover = hex("#83a598"),
                                    .onHover = hex("#282828"),
                                },
                            .terminal =
                                TerminalPalette{
                                    .normal =
                                        TerminalAnsiColors{
                                            .black = hex("#282828"),
                                            .red = hex("#cc241d"),
                                            .green = hex("#98971a"),
                                            .yellow = hex("#d79921"),
                                            .blue = hex("#458588"),
                                            .magenta = hex("#b16286"),
                                            .cyan = hex("#689d6a"),
                                            .white = hex("#a89984"),
                                        },
                                    .bright =
                                        TerminalAnsiColors{
                                            .black = hex("#928374"),
                                            .red = hex("#fb4934"),
                                            .green = hex("#b8bb26"),
                                            .yellow = hex("#fabd2F"),
                                            .blue = hex("#83a598"),
                                            .magenta = hex("#d3869b"),
                                            .cyan = hex("#8ec07c"),
                                            .white = hex("#ebdbb2"),
                                        },
                                    .foreground = hex("#ebdbb2"),
                                    .background = hex("#282828"),
                                    .selectionFg = hex("#ebdbb2"),
                                    .selectionBg = hex("#665c54"),
                                    .cursorText = hex("#282828"),
                                    .cursor = hex("#ebdbb2"),
                                },
                        },
                    .light =
                        FixedPaletteMode{
                            .palette =
                                Palette{
                                    .primary = hex("#98971a"),
                                    .onPrimary = hex("#fbf1c7"),
                                    .secondary = hex("#d79921"),
                                    .onSecondary = hex("#fbf1c7"),
                                    .tertiary = hex("#458588"),
                                    .onTertiary = hex("#fbf1c7"),
                                    .error = hex("#cc241d"),
                                    .onError = hex("#fbf1c7"),
                                    .surface = hex("#fbf1c7"),
                                    .onSurface = hex("#3c3836"),
                                    .surfaceVariant = hex("#ebdbb2"),
                                    .onSurfaceVariant = hex("#7c6f64"),
                                    .outline = hex("#bdae93"),
                                    .shadow = hex("#d5c4a1"),
                                    .hover = hex("#458588"),
                                    .onHover = hex("#fbf1c7"),
                                },
                            .terminal =
                                TerminalPalette{
                                    .normal =
                                        TerminalAnsiColors{
                                            .black = hex("#fbf1c7"),
                                            .red = hex("#cc241d"),
                                            .green = hex("#98971a"),
                                            .yellow = hex("#d79921"),
                                            .blue = hex("#458588"),
                                            .magenta = hex("#b16286"),
                                            .cyan = hex("#689d6a"),
                                            .white = hex("#7c6f64"),
                                        },
                                    .bright =
                                        TerminalAnsiColors{
                                            .black = hex("#928374"),
                                            .red = hex("#9d0006"),
                                            .green = hex("#79740e"),
                                            .yellow = hex("#b57614"),
                                            .blue = hex("#076678"),
                                            .magenta = hex("#8f3f71"),
                                            .cyan = hex("#427b58"),
                                            .white = hex("#3c3836"),
                                        },
                                    .foreground = hex("#3c3836"),
                                    .background = hex("#fbf1c7"),
                                    .selectionFg = hex("#fbf1c7"),
                                    .selectionBg = hex("#3c3836"),
                                    .cursorText = hex("#625e5c"),
                                    .cursor = hex("#3c3836"),
                                },
                        },
                },
                {
                    .name = "Kanagawa",
                    .dark =
                        FixedPaletteMode{
                            .palette =
                                Palette{
                                    .primary = hex("#76946a"),
                                    .onPrimary = hex("#1f1f28"),
                                    .secondary = hex("#c0a36e"),
                                    .onSecondary = hex("#1f1f28"),
                                    .tertiary = hex("#7e9cd8"),
                                    .onTertiary = hex("#1f1f28"),
                                    .error = hex("#c34043"),
                                    .onError = hex("#1f1f28"),
                                    .surface = hex("#1f1f28"),
                                    .onSurface = hex("#c8c093"),
                                    .surfaceVariant = hex("#2a2a37"),
                                    .onSurfaceVariant = hex("#717c7c"),
                                    .outline = hex("#363646"),
                                    .shadow = hex("#1f1f28"),
                                    .hover = hex("#7e9cd8"),
                                    .onHover = hex("#1f1f28"),
                                },
                            .terminal =
                                TerminalPalette{
                                    .normal =
                                        TerminalAnsiColors{
                                            .black = hex("#090618"),
                                            .red = hex("#c34043"),
                                            .green = hex("#76946a"),
                                            .yellow = hex("#c0a36e"),
                                            .blue = hex("#7e9cd8"),
                                            .magenta = hex("#957fb8"),
                                            .cyan = hex("#6a9589"),
                                            .white = hex("#c8c093"),
                                        },
                                    .bright =
                                        TerminalAnsiColors{
                                            .black = hex("#727169"),
                                            .red = hex("#e82424"),
                                            .green = hex("#98bb6c"),
                                            .yellow = hex("#e6c384"),
                                            .blue = hex("#7fb4ca"),
                                            .magenta = hex("#938aa9"),
                                            .cyan = hex("#7aa89F"),
                                            .white = hex("#dcd7ba"),
                                        },
                                    .foreground = hex("#dcd7ba"),
                                    .background = hex("#1f1f28"),
                                    .selectionFg = hex("#c8c093"),
                                    .selectionBg = hex("#2d4f67"),
                                    .cursorText = hex("#1f1f28"),
                                    .cursor = hex("#c8c093"),
                                },
                        },
                    .light =
                        FixedPaletteMode{
                            .palette =
                                Palette{
                                    .primary = hex("#6f894e"),
                                    .onPrimary = hex("#f2ecbc"),
                                    .secondary = hex("#77713F"),
                                    .onSecondary = hex("#f2ecbc"),
                                    .tertiary = hex("#4d699b"),
                                    .onTertiary = hex("#f2ecbc"),
                                    .error = hex("#c84053"),
                                    .onError = hex("#f2ecbc"),
                                    .surface = hex("#f2ecbc"),
                                    .onSurface = hex("#545464"),
                                    .surfaceVariant = hex("#e5ddb0"),
                                    .onSurfaceVariant = hex("#8a8980"),
                                    .outline = hex("#cfc49c"),
                                    .shadow = hex("#f2ecbc"),
                                    .hover = hex("#4d699b"),
                                    .onHover = hex("#f2ecbc"),
                                },
                            .terminal =
                                TerminalPalette{
                                    .normal =
                                        TerminalAnsiColors{
                                            .black = hex("#1F1F28"),
                                            .red = hex("#c84053"),
                                            .green = hex("#6f894e"),
                                            .yellow = hex("#77713F"),
                                            .blue = hex("#4d699b"),
                                            .magenta = hex("#b35b79"),
                                            .cyan = hex("#597b75"),
                                            .white = hex("#545464"),
                                        },
                                    .bright =
                                        TerminalAnsiColors{
                                            .black = hex("#8a8980"),
                                            .red = hex("#d7474b"),
                                            .green = hex("#6e915F"),
                                            .yellow = hex("#836f4a"),
                                            .blue = hex("#6693bf"),
                                            .magenta = hex("#624c83"),
                                            .cyan = hex("#5e857a"),
                                            .white = hex("#43436c"),
                                        },
                                    .foreground = hex("#545464"),
                                    .background = hex("#f2ecbc"),
                                    .selectionFg = hex("#f2ecbc"),
                                    .selectionBg = hex("#c9cbd1"),
                                    .cursorText = hex("#f2ecbc"),
                                    .cursor = hex("#43436c"),
                                },
                        },
                },
                {
                    .name = "Nord",
                    .dark =
                        FixedPaletteMode{
                            .palette =
                                Palette{
                                    .primary = hex("#8fbcbb"),
                                    .onPrimary = hex("#2e3440"),
                                    .secondary = hex("#88c0d0"),
                                    .onSecondary = hex("#2e3440"),
                                    .tertiary = hex("#5e81ac"),
                                    .onTertiary = hex("#2e3440"),
                                    .error = hex("#bf616a"),
                                    .onError = hex("#2e3440"),
                                    .surface = hex("#2e3440"),
                                    .onSurface = hex("#eceff4"),
                                    .surfaceVariant = hex("#3b4252"),
                                    .onSurfaceVariant = hex("#d8dee9"),
                                    .outline = hex("#505a70"),
                                    .shadow = hex("#2e3440"),
                                    .hover = hex("#5e81ac"),
                                    .onHover = hex("#2e3440"),
                                },
                            .terminal =
                                TerminalPalette{
                                    .normal =
                                        TerminalAnsiColors{
                                            .black = hex("#3b4252"),
                                            .red = hex("#bf616a"),
                                            .green = hex("#a3be8c"),
                                            .yellow = hex("#ebcb8b"),
                                            .blue = hex("#81a1c1"),
                                            .magenta = hex("#b48ead"),
                                            .cyan = hex("#88c0d0"),
                                            .white = hex("#e5e9f0"),
                                        },
                                    .bright =
                                        TerminalAnsiColors{
                                            .black = hex("#596377"),
                                            .red = hex("#bf616a"),
                                            .green = hex("#a3be8c"),
                                            .yellow = hex("#ebcb8b"),
                                            .blue = hex("#81a1c1"),
                                            .magenta = hex("#b48ead"),
                                            .cyan = hex("#8fbcbb"),
                                            .white = hex("#eceff4"),
                                        },
                                    .foreground = hex("#d8dee9"),
                                    .background = hex("#2e3440"),
                                    .selectionFg = hex("#4c566a"),
                                    .selectionBg = hex("#eceff4"),
                                    .cursorText = hex("#282828"),
                                    .cursor = hex("#eceff4"),
                                },
                        },
                    .light =
                        FixedPaletteMode{
                            .palette =
                                Palette{
                                    .primary = hex("#5e81ac"),
                                    .onPrimary = hex("#eceff4"),
                                    .secondary = hex("#64adc2"),
                                    .onSecondary = hex("#eceff4"),
                                    .tertiary = hex("#6fa9a8"),
                                    .onTertiary = hex("#eceff4"),
                                    .error = hex("#bf616a"),
                                    .onError = hex("#eceff4"),
                                    .surface = hex("#eceff4"),
                                    .onSurface = hex("#2e3440"),
                                    .surfaceVariant = hex("#e5e9f0"),
                                    .onSurfaceVariant = hex("#4c566a"),
                                    .outline = hex("#c5cedd"),
                                    .shadow = hex("#d8dee9"),
                                    .hover = hex("#6fa9a8"),
                                    .onHover = hex("#eceff4"),
                                },
                            .terminal =
                                TerminalPalette{
                                    .normal =
                                        TerminalAnsiColors{
                                            .black = hex("#3b4252"),
                                            .red = hex("#bf616a"),
                                            .green = hex("#96b17F"),
                                            .yellow = hex("#c5a565"),
                                            .blue = hex("#81a1c1"),
                                            .magenta = hex("#b48ead"),
                                            .cyan = hex("#7bb3c3"),
                                            .white = hex("#a5abb6"),
                                        },
                                    .bright =
                                        TerminalAnsiColors{
                                            .black = hex("#4c566a"),
                                            .red = hex("#bf616a"),
                                            .green = hex("#96b17F"),
                                            .yellow = hex("#c5a565"),
                                            .blue = hex("#81a1c1"),
                                            .magenta = hex("#b48ead"),
                                            .cyan = hex("#82afae"),
                                            .white = hex("#eceff4"),
                                        },
                                    .foreground = hex("#414858"),
                                    .background = hex("#eceff4"),
                                    .selectionFg = hex("#4c556a"),
                                    .selectionBg = hex("#d8dee9"),
                                    .cursorText = hex("#3b4252"),
                                    .cursor = hex("#7bb3c3"),
                                },
                        },
                },
                {
                    .name = "Rosé Pine",
                    .dark =
                        FixedPaletteMode{
                            .palette =
                                Palette{
                                    .primary = hex("#ebbcba"),
                                    .onPrimary = hex("#191724"),
                                    .secondary = hex("#9ccfd8"),
                                    .onSecondary = hex("#191724"),
                                    .tertiary = hex("#31748F"),
                                    .onTertiary = hex("#e0def4"),
                                    .error = hex("#eb6f92"),
                                    .onError = hex("#191724"),
                                    .surface = hex("#191724"),
                                    .onSurface = hex("#e0def4"),
                                    .surfaceVariant = hex("#26233a"),
                                    .onSurfaceVariant = hex("#908caa"),
                                    .outline = hex("#403d52"),
                                    .shadow = hex("#191724"),
                                    .hover = hex("#524f67"),
                                    .onHover = hex("#e0def4"),
                                },
                            .terminal =
                                TerminalPalette{
                                    .normal =
                                        TerminalAnsiColors{
                                            .black = hex("#26233a"),
                                            .red = hex("#eb6f92"),
                                            .green = hex("#31748F"),
                                            .yellow = hex("#f6c177"),
                                            .blue = hex("#9ccfd8"),
                                            .magenta = hex("#c4a7e7"),
                                            .cyan = hex("#ebbcba"),
                                            .white = hex("#e0def4"),
                                        },
                                    .bright =
                                        TerminalAnsiColors{
                                            .black = hex("#6e6a86"),
                                            .red = hex("#eb6f92"),
                                            .green = hex("#31748F"),
                                            .yellow = hex("#f6c177"),
                                            .blue = hex("#9ccfd8"),
                                            .magenta = hex("#c4a7e7"),
                                            .cyan = hex("#ebbcba"),
                                            .white = hex("#e0def4"),
                                        },
                                    .foreground = hex("#e0def4"),
                                    .background = hex("#191724"),
                                    .selectionFg = hex("#e0def4"),
                                    .selectionBg = hex("#403d52"),
                                    .cursorText = hex("#191724"),
                                    .cursor = hex("#e0def4"),
                                },
                        },
                    .light =
                        FixedPaletteMode{
                            .palette =
                                Palette{
                                    .primary = hex("#d7827e"),
                                    .onPrimary = hex("#faf4ed"),
                                    .secondary = hex("#56949F"),
                                    .onSecondary = hex("#faf4ed"),
                                    .tertiary = hex("#286983"),
                                    .onTertiary = hex("#faf4ed"),
                                    .error = hex("#b4637a"),
                                    .onError = hex("#faf4ed"),
                                    .surface = hex("#fffaf3"),
                                    .onSurface = hex("#575279"),
                                    .surfaceVariant = hex("#f2e9e1"),
                                    .onSurfaceVariant = hex("#797593"),
                                    .outline = hex("#dfdad9"),
                                    .shadow = hex("#faf4ed"),
                                    .hover = hex("#cecacd"),
                                    .onHover = hex("#575279"),
                                },
                            .terminal =
                                TerminalPalette{
                                    .normal =
                                        TerminalAnsiColors{
                                            .black = hex("#f2e9e1"),
                                            .red = hex("#b4637a"),
                                            .green = hex("#286983"),
                                            .yellow = hex("#ea9d34"),
                                            .blue = hex("#56949F"),
                                            .magenta = hex("#907aa9"),
                                            .cyan = hex("#d7827e"),
                                            .white = hex("#575279"),
                                        },
                                    .bright =
                                        TerminalAnsiColors{
                                            .black = hex("#9893a5"),
                                            .red = hex("#b4637a"),
                                            .green = hex("#286983"),
                                            .yellow = hex("#ea9d34"),
                                            .blue = hex("#56949F"),
                                            .magenta = hex("#907aa9"),
                                            .cyan = hex("#d7827e"),
                                            .white = hex("#575279"),
                                        },
                                    .foreground = hex("#575279"),
                                    .background = hex("#faf4ed"),
                                    .selectionFg = hex("#575279"),
                                    .selectionBg = hex("#dfdad9"),
                                    .cursorText = hex("#faf4ed"),
                                    .cursor = hex("#575279"),
                                },
                        },
                },
                {
                    .name = "Tokyo-Night",
                    .dark =
                        FixedPaletteMode{
                            .palette =
                                Palette{
                                    .primary = hex("#7aa2f7"),
                                    .onPrimary = hex("#16161e"),
                                    .secondary = hex("#bb9af7"),
                                    .onSecondary = hex("#16161e"),
                                    .tertiary = hex("#9ece6a"),
                                    .onTertiary = hex("#16161e"),
                                    .error = hex("#f7768e"),
                                    .onError = hex("#16161e"),
                                    .surface = hex("#1a1b26"),
                                    .onSurface = hex("#c0caf5"),
                                    .surfaceVariant = hex("#24283b"),
                                    .onSurfaceVariant = hex("#9aa5ce"),
                                    .outline = hex("#353D57"),
                                    .shadow = hex("#15161e"),
                                    .hover = hex("#9ece6a"),
                                    .onHover = hex("#16161e"),
                                },
                            .terminal =
                                TerminalPalette{
                                    .normal =
                                        TerminalAnsiColors{
                                            .black = hex("#15161e"),
                                            .red = hex("#f7768e"),
                                            .green = hex("#9ece6a"),
                                            .yellow = hex("#e0af68"),
                                            .blue = hex("#7aa2f7"),
                                            .magenta = hex("#bb9af7"),
                                            .cyan = hex("#7dcfff"),
                                            .white = hex("#a9b1d6"),
                                        },
                                    .bright =
                                        TerminalAnsiColors{
                                            .black = hex("#414868"),
                                            .red = hex("#f7768e"),
                                            .green = hex("#9ece6a"),
                                            .yellow = hex("#e0af68"),
                                            .blue = hex("#7aa2f7"),
                                            .magenta = hex("#bb9af7"),
                                            .cyan = hex("#7dcfff"),
                                            .white = hex("#c0caf5"),
                                        },
                                    .foreground = hex("#c0caf5"),
                                    .background = hex("#1a1b26"),
                                    .selectionFg = hex("#c0caf5"),
                                    .selectionBg = hex("#283457"),
                                    .cursorText = hex("#1a1b26"),
                                    .cursor = hex("#c0caf5"),
                                },
                        },
                    .light =
                        FixedPaletteMode{
                            .palette =
                                Palette{
                                    .primary = hex("#2e7de9"),
                                    .onPrimary = hex("#e1e2e7"),
                                    .secondary = hex("#9854f1"),
                                    .onSecondary = hex("#e1e2e7"),
                                    .tertiary = hex("#587539"),
                                    .onTertiary = hex("#e1e2e7"),
                                    .error = hex("#f52a65"),
                                    .onError = hex("#e1e2e7"),
                                    .surface = hex("#e1e2e7"),
                                    .onSurface = hex("#3760bf"),
                                    .surfaceVariant = hex("#d0d5e3"),
                                    .onSurfaceVariant = hex("#6172b0"),
                                    .outline = hex("#b4b5b9"),
                                    .shadow = hex("#a8aecb"),
                                    .hover = hex("#587539"),
                                    .onHover = hex("#e1e2e7"),
                                },
                            .terminal =
                                TerminalPalette{
                                    .normal =
                                        TerminalAnsiColors{
                                            .black = hex("#e9e9ed"),
                                            .red = hex("#f52a65"),
                                            .green = hex("#587539"),
                                            .yellow = hex("#8c6c3e"),
                                            .blue = hex("#2e7de9"),
                                            .magenta = hex("#9854f1"),
                                            .cyan = hex("#007197"),
                                            .white = hex("#6172b0"),
                                        },
                                    .bright =
                                        TerminalAnsiColors{
                                            .black = hex("#a1a6c5"),
                                            .red = hex("#f52a65"),
                                            .green = hex("#587539"),
                                            .yellow = hex("#8c6c3e"),
                                            .blue = hex("#2e7de9"),
                                            .magenta = hex("#9854f1"),
                                            .cyan = hex("#007197"),
                                            .white = hex("#3760bf"),
                                        },
                                    .foreground = hex("#3760bf"),
                                    .background = hex("#e1e2e7"),
                                    .selectionFg = hex("#3760bf"),
                                    .selectionBg = hex("#99a7df"),
                                    .cursorText = hex("#e1e2e7"),
                                    .cursor = hex("#3760bf"),
                                },
                        },
                },
            }
    };

  } // namespace

  std::span<const BuiltinPalette> builtinPalettes() { return kPalettes; }

  const BuiltinPalette* findBuiltinPalette(std::string_view name) {
    for (const auto& palette : kPalettes) {
      if (palette.name == name) {
        return &palette;
      }
    }
    return nullptr;
  }

  GeneratedPalette expandBuiltinPalette(const BuiltinPalette& palette) {
    auto generated = expandFixedPalettes(palette.dark.palette, palette.light.palette);
    applyTerminalPalette(generated.dark, palette.dark.terminal);
    applyTerminalPalette(generated.light, palette.light.terminal);
    return generated;
  }

} // namespace kyo::theme
