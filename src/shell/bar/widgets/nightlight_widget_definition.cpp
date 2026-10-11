#include "shell/bar/widgets/nightlight_widget_definition.h"

const kyo::bar::WidgetDefinition<std::monostate>& nightlightWidgetDefinition() {
  static const kyo::bar::WidgetDefinition<std::monostate> definition{
      .type = "nightlight",
  };
  return definition;
}
