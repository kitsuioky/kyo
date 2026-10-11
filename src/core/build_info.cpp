#include "core/build_info.h"

#include "kyo_git_revision.h"

namespace kyo::build_info {

  std::string_view version() noexcept { return KYO_VERSION; }

  std::string_view revision() noexcept { return KYO_GIT_REVISION; }

  std::string displayVersion() {
    std::string label = "v";
    label += version();

    constexpr std::string_view unknownRevision = "unknown";
    const std::string_view rev = revision();
    if (!rev.empty() && rev != unknownRevision) {
      label += " (";
      label += rev;
      label += ')';
    }
    return label;
  }

} // namespace kyo::build_info
