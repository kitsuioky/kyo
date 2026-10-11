#include "shell/bar/widgets/test_widget_definition.h"

const kyo::bar::WidgetDefinition<std::monostate>& testWidgetDefinition() {
  static const kyo::bar::WidgetDefinition<std::monostate> definition{
      .type = "test",
  };
  return definition;
}
