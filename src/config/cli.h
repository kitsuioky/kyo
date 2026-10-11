#pragma once

namespace kyo::config {

  // Entry point for `kyo config <command> [options]`. Returns a process
  // exit code. Pure CLI helper; does not start Application or mutate live config.
  int runCli(int argc, char* argv[]);

} // namespace kyo::config
