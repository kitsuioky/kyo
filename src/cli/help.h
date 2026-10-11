#pragma once

#include "cli/schema.h"

#include <string>
#include <string_view>

namespace kyo::cli {

  [[nodiscard]] std::string renderHelp(const Command& command, std::string_view path);
  [[nodiscard]] std::string renderArgsSpec(const Command& command);

} // namespace kyo::cli
