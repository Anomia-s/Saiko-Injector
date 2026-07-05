#!/usr/bin/env python3
"""Saiko Injector CLI - Control the injected payload via named pipe."""

import os
import sys
import time
import subprocess
import argparse
import textwrap

PIPE_NAME = r"\\.\pipe\saiko-injector"
RETRY_COUNT = 3
RETRY_DELAY = 1.0

ANSI = {
    "reset":      "\033[0m",
    "bold":       "\033[1m",
    "dim":        "\033[2m",
    "red":        "\033[91m",
    "green":      "\033[92m",
    "yellow":     "\033[93m",
    "blue":       "\033[94m",
    "magenta":    "\033[95m",
    "cyan":       "\033[96m",
    "white":      "\033[97m",
}


def colorize(text: str, color: str) -> str:
    """Wrap text with ANSI color codes if stdout is a TTY."""
    if sys.stdout.isatty():
        return f"{ANSI.get(color, '')}{text}{ANSI['reset']}"
    return text


def status(msg: str) -> None:
    """Print a status line with a cyan arrow prefix."""
    print(f"{colorize('==>', 'cyan')} {msg}")


def success(msg: str) -> None:
    """Print a success message in green."""
    print(f"{colorize('OK:', 'green')}  {msg}")


def error(msg: str) -> None:
    """Print an error message in red."""
    print(f"{colorize('ERR:', 'red')} {msg}")


def pipe_connect():
    """Open a handle to the named pipe.

    Tries pywin32 first, then falls back to the built-in _winapi module.

    Returns:
        A file-like pipe handle, or None if connection fails.

    Raises:
        OSError: If the pipe is unavailable.
    """
    try:
        import win32file      # type: ignore[import-untyped]
        import win32pipe      # type: ignore[import-untyped]
        import win32com       # type: ignore[import-untyped]  # side-effect init
    except ImportError:
        return _fallback_pipe_connect()

    # pywin32 path
    handle = win32file.CreateFile(
        PIPE_NAME,
        win32file.GENERIC_READ | win32file.GENERIC_WRITE,
        0,
        None,
        win32file.OPEN_EXISTING,
        0,
        None,
    )
    win32pipe.SetNamedPipeHandleState(
        handle,  # pyright: ignore[reportArgumentType]
        win32pipe.PIPE_READMODE_MESSAGE,
        None,
        None,
    )
    return handle


def _fallback_pipe_connect():
    """Connect to the named pipe using the built-in _winapi module."""
    import _winapi  # type: ignore[import-not-found]

    handle = _winapi.CreateFile(  # pyright: ignore[reportCallIssue]
        PIPE_NAME,
        _winapi.GENERIC_READ | _winapi.GENERIC_WRITE,
        0,
        0,
        _winapi.OPEN_EXISTING,
        0,
        0,
    )
    # Set message-read mode
    _winapi.SetNamedPipeHandleState(
        handle,
        2,  # PIPE_READMODE_MESSAGE
        None,
        None,
    )
    return handle


def send_command(cmd: str) -> str:
    """Send a command to the payload over the named pipe and return the response.

    Args:
        cmd: The command string to send (e.g. "lua:print('hi')", "keybind:Play/Stop:F9").

    Returns:
        The response string from the payload.

    Raises:
        ConnectionError: If the pipe cannot be reached after all retries.
    """
    last_err = None
    for attempt in range(1, RETRY_COUNT + 1):
        handle = None
        try:
            status(f"Connecting (attempt {attempt}/{RETRY_COUNT})...")
            handle = pipe_connect()
            # Write command
            cmd_bytes = (cmd + "\n").encode("utf-8")
            _pipe_write(handle, cmd_bytes)
            # Read response
            resp = _pipe_read(handle)
            if resp:
                return resp.strip()
            return ""
        except OSError as e:
            last_err = str(e)
            if attempt < RETRY_COUNT:
                time.sleep(RETRY_DELAY)
        finally:
            if handle is not None:
                try:
                    _pipe_close(handle)
                except OSError:
                    pass

    raise ConnectionError(
        f"Failed to connect to named pipe after {RETRY_COUNT} attempts.\n"
        f"  Last error: {last_err}\n"
        f"  Is the payload injected? Run 'lulu.py inject' first."
    )


def _pipe_write(handle, data: bytes) -> None:
    """Write bytes to the pipe, auto-detecting the API in use."""
    try:
        import win32file  # type: ignore[import-untyped]
        win32file.WriteFile(handle, data)
    except ImportError:
        import _winapi  # type: ignore[import-not-found]
        _winapi.WriteFile(handle, data)


def _pipe_read(handle, chunk_size: int = 4096) -> str:
    """Read bytes from the pipe, auto-detecting the API in use."""
    try:
        import win32file  # type: ignore[import-untyped]
        _rc, data = win32file.ReadFile(handle, chunk_size)
        return data.decode("utf-8", errors="replace")  # pyright: ignore[reportAttributeAccessIssue]
    except ImportError:
        import _winapi  # type: ignore[import-not-found]
        data = _winapi.ReadFile(handle, chunk_size)  # pyright: ignore[reportUnknownVariableType]
        if isinstance(data, tuple):
            # _winapi.ReadFile may return (err, buf)
            data = data[1]
        return data.decode("utf-8", errors="replace")  # pyright: ignore[reportAttributeAccessIssue]


def _pipe_close(handle) -> None:
    """Close the pipe handle, auto-detecting the API in use."""
    try:
        import win32file  # type: ignore[import-untyped]
        win32file.CloseHandle(handle)
    except ImportError:
        import _winapi  # type: ignore[import-not-found]
        _winapi.CloseHandle(handle)


def find_target_pid() -> int | None:
    """Find the process ID of LuduvoApp.exe.

    Returns:
        The PID as an integer, or None if no matching process is found.
    """
    try:
        output = subprocess.check_output(
            ["tasklist", "/FI", "IMAGENAME eq LuduvoApp.exe", "/NH", "/FO", "CSV"],
            text=True,
            timeout=10,
        )
    except (subprocess.CalledProcessError, FileNotFoundError):
        return None

    for line in output.splitlines():
        line = line.strip().strip('"')
        if line.lower().startswith("luduvoapp.exe"):
            parts = [p.strip('"') for p in line.split(",")]
            if len(parts) >= 2:
                try:
                    return int(parts[1])
                except ValueError:
                    continue
    return None


def inject_dll(script_dir: str) -> bool:
    """Run the injector executable to inject the payload DLL into LuduvoApp.exe.

    Args:
        script_dir: The directory containing this script (used to locate the injector).

    Returns:
        True if injection succeeded, False otherwise.
    """
    # Locate injector executable
    injector_paths = [
        os.path.join(script_dir, "..", "injector", "injector.exe"),
        os.path.join(script_dir, "..", "build", "injector.exe"),
        os.path.join(script_dir, "..", "x64", "Release", "injector.exe"),
        os.path.join(script_dir, "..", "x64", "Debug", "injector.exe"),
    ]

    injector_exe = None
    for p in injector_paths:
        if os.path.isfile(p):
            injector_exe = os.path.normpath(p)
            break

    if injector_exe is None:
        error("Cannot find injector.exe.  Searched:")
        for p in injector_paths:
            print(f"    {p}")
        print()
        print("Build the injector project first and place injector.exe in one of the above paths,")
        print("or run this script from the cli/ directory inside the source tree.")
        return False

    # Locate payload DLL
    payload_paths = [
        os.path.join(os.path.dirname(injector_exe), "..", "payload", "payload.dll"),
        os.path.join(os.path.dirname(injector_exe), "payload.dll"),
    ]
    if injector_exe:
        payload_paths.insert(0, os.path.join(os.path.dirname(injector_exe), "payload.dll"))

    payload_dll = None
    for p in payload_paths:
        if os.path.isfile(p):
            payload_dll = os.path.normpath(p)
            break

    status(f"Injector : {injector_exe}")
    if payload_dll:
        status(f"Payload  : {payload_dll}")
    else:
        status("Payload  : (will be resolved by injector)")

    # Determine target PID
    pid = find_target_pid()
    if pid is None:
        error("LuduvoApp.exe is not running.  Start Luduvo first.")
        return False
    status(f"Target PID: {pid}")

    # Build command line
    if payload_dll:
        cmd = [injector_exe, "--pid", str(pid), "--dll", payload_dll]
    else:
        cmd = [injector_exe, "--pid", str(pid)]

    try:
        result = subprocess.run(cmd, capture_output=True, text=True, timeout=30)
        if result.stdout:
            print(result.stdout.strip())
        if result.stderr:
            print(colorize(result.stderr.strip(), "yellow"))

        if result.returncode == 0:
            success("DLL injected successfully.")
            return True
        else:
            error(f"Injector exited with code {result.returncode}.")
            return False
    except subprocess.TimeoutExpired:
        error("Injection timed out after 30 seconds.")
        return False
    except FileNotFoundError:
        error(f"Could not run injector: {injector_exe}")
        return False


def cmd_inject(args: argparse.Namespace) -> None:
    """Handle the 'inject' command."""
    script_dir = os.path.dirname(os.path.abspath(__file__))
    inject_dll(script_dir)


def cmd_keybind(args: argparse.Namespace) -> None:
    """Handle the 'keybind' command."""
    action = args.action
    key = args.key
    try:
        resp = send_command(f"keybind:{action}:{key}")
        success(resp)
    except ConnectionError as e:
        error(str(e))
        sys.exit(1)


def cmd_lua(args: argparse.Namespace) -> None:
    """Handle the 'lua' command."""
    code = " ".join(args.code) if isinstance(args.code, list) else args.code
    try:
        resp = send_command(f"lua:{code}")
        if resp:
            success(resp)
    except ConnectionError as e:
        error(str(e))
        sys.exit(1)


def cmd_reload(args: argparse.Namespace) -> None:
    """Handle the 'reload' command."""
    try:
        resp = send_command("reload")
        success(resp)
    except ConnectionError as e:
        error(str(e))
        sys.exit(1)


def cmd_status(args: argparse.Namespace) -> None:
    """Handle the 'status' command."""
    try:
        resp = send_command("status")
        success(resp)
    except ConnectionError as e:
        error(str(e))
        sys.exit(1)


def cmd_uninject(args: argparse.Namespace) -> None:
    """Handle the 'uninject' command."""
    try:
        resp = send_command("shutdown")
        success(resp)
    except ConnectionError:
        # Shutdown may close the pipe before we can read a reply
        success("Shutdown command sent (pipe closed).")


def cmd_demo(args: argparse.Namespace) -> None:
    """Handle the 'demo' command."""
    print(colorize("Running full demo - check the Luduvo window!", "bold"))
    try:
        resp = send_command("demo")
        success(resp)
    except ConnectionError as e:
        error(str(e))
        sys.exit(1)


def cmd_token(args: argparse.Namespace) -> None:
    """Handle the 'token' command."""
    try:
        resp = send_command("token")
        print(resp)
    except ConnectionError as e:
        error(str(e))
        sys.exit(1)


def build_parser() -> argparse.ArgumentParser:
    """Build the argument parser for the CLI.

    Returns:
        Configured ArgumentParser instance.
    """
    parser = argparse.ArgumentParser(
        prog="lulu",
        description=colorize("Saiko Injector CLI", "bold"),
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog=textwrap.dedent("""\
            commands:
              inject               Inject payload.dll into LuduvoApp.exe
              keybind <action> <key>  Remap a keyboard shortcut
              lua "<code>"         Execute Lua code
              reload               Reload keybinds from keybinds.json
              status               Check connection status
              uninject             Send shutdown to the injected payload
        """),
    )

    sub = parser.add_subparsers(dest="command", title="commands")

    p_inject = sub.add_parser("inject", help="Inject payload.dll into LuduvoApp.exe")
    p_inject.set_defaults(func=cmd_inject)

    p_keybind = sub.add_parser("keybind", help="Remap a keyboard shortcut")
    p_keybind.add_argument("action", help="Action name (e.g. Play/Stop)")
    p_keybind.add_argument("key", help="New key shortcut (e.g. F9)")
    p_keybind.set_defaults(func=cmd_keybind)

    p_lua = sub.add_parser("lua", help="Execute Lua code in the payload")
    p_lua.add_argument("code", nargs="+", help="Lua code to execute")
    p_lua.set_defaults(func=cmd_lua)

    p_reload = sub.add_parser("reload", help="Reload keybinds from keybinds.json")
    p_reload.set_defaults(func=cmd_reload)

    p_status = sub.add_parser("status", help="Check connection status")
    p_status.set_defaults(func=cmd_status)

    p_uninject = sub.add_parser("uninject", help="Send shutdown to the injected payload")
    p_uninject.set_defaults(func=cmd_uninject)

    p_demo = sub.add_parser("demo", help="Run full demo (hijack window, show message, extract data)")
    p_demo.set_defaults(func=cmd_demo)

    p_token = sub.add_parser("token", help="Extract session token from process memory")
    p_token.set_defaults(func=cmd_token)

    return parser


def main() -> None:
    """Entry point: parse arguments and dispatch to the appropriate handler."""
    parser = build_parser()

    if len(sys.argv) == 1:
        parser.print_help()
        sys.exit(0)

    args = parser.parse_args()

    if args.command is None:
        parser.print_help()
        sys.exit(1)

    args.func(args)


if __name__ == "__main__":
    main()
