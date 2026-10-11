#pragma once

#include "shell/bar/widget_definition.h"
#include "shell/bar/widgets/launcher_widget.h"

[[nodiscard]] const kyo::bar::WidgetDefinition<LauncherWidget::Options>& launcherWidgetDefinition();
