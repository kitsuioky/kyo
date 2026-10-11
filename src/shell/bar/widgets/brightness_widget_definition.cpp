#include "shell/bar/widgets/brightness_widget_definition.h"

const kyo::bar::WidgetDefinition<BrightnessWidget::Options>& brightnessWidgetDefinition() {
  using kyo::bar::field;
  using Options = BrightnessWidget::Options;

  static const kyo::bar::WidgetDefinition<Options> definition{
      .type = "brightness",
      .fields = {
          field<&Options::showLabel>({
              .key = "show_label",
          }),
          field<&Options::showWhenUnavailable>({
              .key = "show_when_unavailable",
          }),
      },
  };
  return definition;
}
