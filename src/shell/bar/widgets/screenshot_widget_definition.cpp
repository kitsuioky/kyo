#include "shell/bar/widgets/screenshot_widget_definition.h"

#include "shell/bar/widgets/glyph_button_definition.h"

const kyo::bar::WidgetDefinition<ScreenshotWidget::Options>& screenshotWidgetDefinition() {
  using Options = ScreenshotWidget::Options;

  static const kyo::bar::WidgetDefinition<Options> definition{
      .type = "screenshot",
      .fields = kyo::bar::glyphButtonFields<Options>(),
  };
  return definition;
}
