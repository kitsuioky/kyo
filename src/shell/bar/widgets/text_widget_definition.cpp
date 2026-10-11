#include "shell/bar/widgets/text_widget_definition.h"

const kyo::bar::WidgetDefinition<TextWidget::Options>& textWidgetDefinition() {
  using kyo::bar::field;
  using Options = TextWidget::Options;

  static const kyo::bar::WidgetDefinition<Options> definition{
      .type = "text",
      .fields = {
          field<&Options::text>({
              .key = "text",
          }),
      },
  };
  return definition;
}
