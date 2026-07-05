<div align="center">
	<img width=250 src="https://static.wikia.nocookie.net/tokyo-ghoul-la/images/4/45/Saiko_anime.png/revision/latest?cb=20171216121628&path-prefix=es" />
	<h2>Saiko Injector</h2>
</div>

[![License](https://img.shields.io/badge/license-educational-blue.svg?style=flat-square)]()
[![Platform](https://img.shields.io/badge/platform-Windows%20x64-0078D6.svg?style=flat-square)]()
[![Language](https://img.shields.io/badge/language-C%2B%2B17-purple.svg?style=flat-square)]()

### What does this do?

Saiko Injector lets you mess with a certain game creation platform while it's running. Remap keybinds on the fly, execute Lua scripts inside the engine, and generally have way more control than you're supposed to have. All through a clean CLI and named pipe interface.


### How even?

By injecting a tiny DLL into the target process. Once it's in there, it hooks into the Qt6 widget system, the Luau scripting VM, and the Flecs ECS world. Then it opens a named pipe so you can send commands from your terminal.

The four things you get:

1. **Keybind remapping** - Change any keyboard shortcut at runtime by poking QAction objects directly
2. **Lua execution** - Feed Lua/Luau code straight into the embedded VM
3. **ECS access** - Browse the entire Flecs entity-component world
4. **Pipe control** - Talk to the injected DLL from your own scripts or the bundled CLI

<div align="center">
	<img src="https://media.discordapp.net/attachments/814833940077477888/1523020158090870795/image.png?ex=6a4b3f4e&is=6a49edce&hm=f00f47895672ad05da63120d5422502f305eff52e46d5c4f8e95f677b4ffd1e3&=&format=webp&quality=lossless" />
</div>

### How do I use it?

#### 1. Build it

You'll need:

| Tool | Version |
|------|---------|
| CMake | 3.20+ |
| MSVC | Visual Studio 2022 |
| Windows SDK | 10.0.22621+ |
| Target | x64 |

```powershell
cmake -B build -G "Visual Studio 17 2022" -A x64
cmake --build build --config Release
```

You'll get `payload.dll` and `injector.exe` in `build/bin/Release/`.

#### 2. Inject the payload

```powershell
# Make sure the target app is running, then:
.\injector.exe <PID> .\payload.dll
```

Or let the Python CLI handle everything:

```powershell
cd cli
pip install -r requirements.txt
python lulu.py inject
```

#### 3. Start messing around

```powershell
# Remap a keybind
python lulu.py keybind Play F6

# Execute Lua code
python lulu.py lua "print('konnichiwa from the inside~')"

# Check what's happening
python lulu.py status

# Run the full demo (window hijack, proof popup, token extraction)
python lulu.py demo
```

#### CLI reference

```
  inject               Inject the payload DLL
  keybind <action> <key>   Remap a keyboard shortcut
  lua "<code>"         Execute Lua code
  reload               Reset keybinds to defaults
  status               Show injection status
  uninject             Shut down the payload
  demo                 Run full proof-of-concept demo
  token                Extract session data
```

<div align="center">
	<img src="<!-- Replace with Saiko Yonebayashi image URL -->" width="250" />
</div>

### The pipe protocol

If you want to talk to the payload from your own code, connect to `\\.\pipe\saiko-injector` and send one of these:

| Command | What it does |
|---------|-------------|
| `PING` | Health check, responds `PONG` |
| `STATUS` | Current injection status |
| `KEYBIND:<action>:<key>` | Remap a keybind |
| `LUA:<code>` | Execute Lua code |
| `RELOAD_KEYBINDS` | Reset to defaults |
| `DEMO` | Run the full proof-of-concept |
| `TOKEN` | Extract session tokens from memory |

<div align="center">
	<img src="<!-- Replace with Saiko Yonebayashi image URL -->" width="300" />
</div>

### How it works under the hood

#### The injection

Classic `CreateRemoteThread` + `LoadLibraryA`. Opens the target, allocates memory for the DLL path, then creates a remote thread that calls `LoadLibraryA` with that path. The payload's `DllMain` fires inside the target process.

#### Keybind remapping

The payload resolves Qt6 functions from the host process's already-loaded Qt DLLs at runtime (no static linking), then walks the widget tree starting from `QApplication::topLevelWidgets()` to find QAction objects. Once found, it calls `QAction::setShortcut()` with a new key sequence.

#### Lua execution

The payload accesses the embedded Luau VM through the Flecs ECS world (stored under `"__luduvo_world"`). Raw Lua source code gets fed into the Luau compiler/VM pipeline and executes in the game's scripting environment.

#### SDL2 camera hooks

The 3D viewport uses SDL2 for input. The payload installs a `WH_KEYBOARD_LL` hook that intercepts camera controls (WASD, right-click drag, mouse wheel) and can remap them transparently.

#### ECS world access

The Flecs ECS world is discovered by scanning process memory for its magic header (`0x65637377` - "ecsw") or by walking Qt top-level widgets to find the viewport. From there, the entire entity-component universe is accessible.


### Project layout

```
saiko-injector/
├── cli/                  Python CLI tool (lulu.py)
├── injector/             DLL injector executable
│   ├── main.cpp          CreateRemoteThread injection
│   └── find_process.*    Process lookup
├── payload/              The injected DLL
│   ├── dllmain.cpp       Entry point, initializes everything
│   ├── pipe_server.*     Named pipe IPC server
│   ├── keybind.*         Qt6 QAction shortcut manipulation
│   ├── ecs_hook.*        ECS world access + Lua execution
│   ├── sdl_hook.*        SDL2 keyboard hook + camera remap
│   └── troll.*           Demo: window hijack, popup, token extraction
├── shared/               Shared utilities
│   ├── shared.*          Logging, string helpers
│   ├── qt_proxy.*        Qt6 function pointer resolution
│   └── version.h.in      Version template for CMake
├── CMakeLists.txt
├── keybinds.json         Default keybind definitions
└── TECHNICAL.md          Deep dive on the target's internals
```


### What it can and can't do

**Can do:**
- Remap any QAction keyboard shortcut at runtime
- Execute arbitrary Luau code in the scripting environment
- Read the full Flecs ECS world
- Intercept and remap SDL2 viewport input
- Extract session data from process memory

**Can't do:**
- Needs the payload DLL already injected (same-user access required)
- Luau is sandboxed by the engine's own security model
- Only remaps actions that exist in the Qt widget tree
- No persistence (unloads when the target exits)
- Standard `CreateRemoteThread` injection is detectable



### Key discoveries from reverse engineering

The target application is a beast: ~40,000 functions across a Qt6 GUI, Flecs ECS, Jolt Physics, and the full Luau typed compiler. Here's the quick tour:

- **60+ Luau AST node types** found via RTTI, confirming the full typed compiler pipeline
- **Flecs ECS world** with bootstrap entities, component registrations (Transform, Script, RigidBody, Camera...), systems, and queries
- **Qt6 widget tree**: `EditorMainWindow` > `MainToolBar` > QActionGroup with Play, Select, Move, Scale, Rotate tools
- **Graphics**: D3D12 primary, Vulkan optional, NVRHI render interface, Tracy profiler
- **Networking**: httplib + WinHTTP, OpenSSL with post-quantum crypto, Ed25519 signature verification for updates
- **Input**: SDL2 keyboard/mouse/gamepad, plus HIDAPI for PlayStation, Nintendo, Xbox controllers

Full technical breakdown is in [TECHNICAL.md](TECHNICAL.md).

### Credits

Built with help from:

- [Ghidra](https://ghidra-sre.org/) - the decompiler that made this possible
- [RetDec](https://retdec.com/) - retargetable decompiler
- [Flecs ECS docs](https://github.com/SanderMertens/flecs)
- [Luau source](https://github.com/luau-lang/luau)
- Qt6 SDK documentation

---

<div align="center">
	<img src="https://media.discordapp.net/attachments/1516596181478670457/1522021616572174346/anomi.png?ex=6a4b91d7&is=6a4a4057&hm=3378586309a5eeb2ddd27830d0d3167b67db30a8a12a36aa3ac0b5e7bfaab227&=&format=webp&quality=lossless&width=1135&height=968" width="400" />
	<br/><br/>
	<i>educational purposes only. be responsible. don't be mean.</i>
	<br/>
	<sub>not affiliated with or endorsed by anyone. obviously.</sub>
</div>
