#include "shell/bar/widgets/notification_widget_definition.h"

const kyo::bar::WidgetDefinition<NotificationWidget::Options>& notificationWidgetDefinition() {
  using kyo::bar::field;
  using Options = NotificationWidget::Options;

  static const kyo::bar::WidgetDefinition<Options> definition{
      .type = "notifications",
      .fields = {
          field<&Options::hideWhenNoUnread>({
              .key = "hide_when_no_unread",
          }),
      },
  };
  return definition;
}
