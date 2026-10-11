#pragma once

namespace kyo::ipc {

  // Entry point for `kyo msg <command> [args...]`. Returns a process exit
  // code. Forwards the command to the running instance over the IPC socket.
  int runCli(int argc, char* argv[]);

} // namespace kyo::ipc
