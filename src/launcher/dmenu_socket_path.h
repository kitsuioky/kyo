#pragma once

#include <string>

namespace kyo::launcher {

  struct DmenuSocketPathResult {
    std::string path;
    std::string error;
  };

  [[nodiscard]] DmenuSocketPathResult resolveDmenuSocketPath();

} // namespace kyo::launcher
