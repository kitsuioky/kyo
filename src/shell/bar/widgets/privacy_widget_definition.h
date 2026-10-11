#pragma once

#include "shell/bar/widget_definition.h"
#include "shell/bar/widgets/privacy_widget.h"

[[nodiscard]] const kyo::bar::WidgetDefinition<PrivacyWidget::Options>& privacyWidgetDefinition();
