# Saiko Injector - Technical Deep Dive

> Raw technical findings from Ghidra reverse engineering of `LuduvoApp.exe` (x86_64).

---

## Binary Overview

```
File:        LuduvoApp.exe
Format:      PE32+ (x86_64)
Compiler:    MSVC v143 (Visual Studio 2022)
Base:        0x140000000
Functions:   40,805 (39,873 user + 932 thunks)
Sections:    .text, .rdata, .data, .pdata, .xdata, .bss, .idata, .rsrc, .reloc
```

### Import Summary

| DLL | Purpose |
|-----|---------|
| KERNEL32.DLL | 193 imports |
| USER32.DLL | ~15 imports |
| GDI32.DLL | ~10 imports |
| ADVAPI32.DLL | Registry, crypto |
| SHELL32.DLL | Shell operations |
| COMCTL32.DLL | Common controls |
| OPENAL32.DLL | 24 imports (audio) |
| BCrypt.dll | Hashing |
| WINHTTP.dll | HTTP requests |
| MSVCP140.dll | C++ runtime |
| VCRUNTIME140.dll | C runtime |

Qt6 is **dynamically linked** (Qt6Core.dll, Qt6Widgets.dll, Qt6Gui.dll, Qt5Compat.dll). SDL2, Flecs, Jolt Physics, Luau, httplib, OpenSSL, Tracy, and Quill are all **statically linked**.

---

## Decompilation Statistics

| Metric | Count |
|--------|-------|
| Total functions in binary | 40,805 |
| External (imported) | 0 (already broken out) |
| Thunk functions | 932 |
| User functions | 39,873 |
| Successfully decompiled by Ghidra | 20,068 |
| Decompilation failed | 1 |
| Functions with 10+ code units | 33,732 (84.6%) |
| Functions with 50+ code units | 13,074 (32.8%) |
| Functions with 100+ code units | 7,300 (18.3%) |
| Named/demangled functions | 20,069 (50.3%) |
| FUN_-prefixed (unnamed) | 19,804 |
| RTTI class strings found | 987 |
| Recovered structures/classes | 2,419 |
| Recovered unions | 17 |
| Recovered enums | 119 |
| Recovered typedefs | 285 |
| Vftable structures | 789 |

---

## RTTI-Discovered Class Hierarchy

### Luau Namespace (84 RTTI entries)

All Luau AST node types are present, confirming the full typed compiler is embedded:

```
Luau::AstAttr                             [RTTI #656]
Luau::AstNode                             [RTTI #657]
Luau::AstGenericType                      [RTTI #658]
Luau::AstGenericTypePack                  [RTTI #659]
Luau::AstExprGroup                        [RTTI #660]
Luau::AstExpr                             [RTTI #661]
Luau::AstExprConstantNil                  [RTTI #662]
Luau::AstExprConstantBool                 [RTTI #663]
Luau::AstExprConstantNumber               [RTTI #664]
Luau::AstExprConstantString               [RTTI #665]
Luau::AstExprLocal                        [RTTI #666]
Luau::AstExprGlobal                       [RTTI #667]
Luau::AstExprVarargs                      [RTTI #668]
Luau::AstExprCall                         [RTTI #669]
Luau::AstExprIndexName                    [RTTI #670]
Luau::AstExprIndexExpr                    [RTTI #671]
Luau::AstExprFunction                     [RTTI #672]
Luau::AstExprTable                        [RTTI #673]
Luau::AstExprUnary                        [RTTI #674]
Luau::AstExprBinary                       [RTTI #675]
Luau::AstExprTypeAssertion                [RTTI #676]
Luau::AstExprIfElse                       [RTTI #677]
Luau::AstExprError                        [RTTI #678]
Luau::AstExprInterpString                 [RTTI #679]
Luau::AstExprInstantiate                  [RTTI #680]
Luau::AstStatBlock                        [RTTI #681]
Luau::AstStat                             [RTTI #682]
Luau::AstStatIf                           [RTTI #683]
Luau::AstStatWhile                        [RTTI #684]
Luau::AstStatRepeat                       [RTTI #685]
Luau::AstStatBreak                        [RTTI #686]
Luau::AstStatContinue                     [RTTI #687]
Luau::AstStatReturn                       [RTTI #688]
Luau::AstStatExpr                         [RTTI #689]
Luau::AstStatLocal                        [RTTI #690]
Luau::AstStatFor                          [RTTI #691]
Luau::AstStatForIn                        [RTTI #692]
Luau::AstStatAssign                       [RTTI #693]
Luau::AstStatCompoundAssign               [RTTI #694]
Luau::AstStatFunction                     [RTTI #695]
Luau::AstStatLocalFunction                [RTTI #696]
Luau::AstStatTypeAlias                    [RTTI #697]
Luau::AstStatTypeFunction                 [RTTI #698]
Luau::AstStatDeclareGlobal                [RTTI #699]
Luau::AstStatDeclareFunction              [RTTI #700]
Luau::AstStatDeclareExternType            [RTTI #701]
Luau::AstStatError                        [RTTI #702]
Luau::AstTypeReference                    [RTTI #703]
Luau::AstType                             [RTTI #704]
Luau::AstTypeTable                        [RTTI #705]
Luau::AstTypeFunction                     [RTTI #706]
Luau::AstTypeTypeof                       [RTTI #707]
Luau::AstTypeOptional                     [RTTI #708]
Luau::AstTypeUnion                        [RTTI #709]
Luau::AstTypeIntersection                 [RTTI #710]
Luau::AstTypeSingletonBool                [RTTI #711]
Luau::AstTypeSingletonString              [RTTI #712]
Luau::AstTypeGroup                        [RTTI #713]
Luau::AstTypeError                        [RTTI #714]
Luau::AstTypePackExplicit                 [RTTI #715]
Luau::AstTypePack                         [RTTI #716]
Luau::AstTypePackVariadic                 [RTTI #717]
Luau::AstTypePackGeneric                  [RTTI #718]
Luau::CompileError                        [RTTI #719]
Luau::AstVisitor                          [RTTI #720]
Luau::ParseError                          [RTTI #721]
```

### Key Application Classes (ldv::editor namespace)

```
EditorMainWindow (ldv::editor)            [RTTI #25]
LoginDialog (ldv::editor)                 [RTTI #140]
PublishDialog (ldv::editor)               [RTTI #142]
NewProjectDialog (ldv::editor)            [RTTI #143]
AssetItemDelegate (ldv::editor)           [RTTI #154]
ThemeService (ldv::editor)                [RTTI #127]
```

### Physics (JPH namespace)

```
BPLayerInterface                          [RTTI #64]
ObjVsBPFilter                             [RTTI #67]
ObjLayerPairFilter                        [RTTI #69]
BodyLockInterfaceNoLock                   [RTTI #71]
TempAllocatorImpl                         [RTTI #76]
CharacterContactListener (ldv::gameplay)   [RTTI #78]
SphereShape                               [RTTI #80]
BoxShape                                  [RTTI #183]
GroupFilterTable                          [RTTI #84]
```

### Graphics

```
Gizmo classes: ScaleGizmo, MoveGizmo, RotateGizmo
D3D12 classes (tracyd3d12_ namespace)
Vulkan classes (multiple vk_* functions)
NVRHI shader/renderer classes
```

---

## Function Address Table

### Editor Main Window & Toolbar

| Address | Name | Size | Description |
|---------|------|------|-------------|
| `0x140271f60` | `add_script_to_selected_entity` | 8,840 B | Creates MainToolBar, registers all toolbar QActions with shortcuts |
| `0x140093fb0` | `cancel_playtest_start_f5` | ~100 B | Handles Play/Stop F5 action state toggle |
| `0x1402664e0` | `ubackground_color` | 149 B | Sets background color |
| `0x14026a840` | `u_add_component` | 1,169 B | Adds a component to selected entity |
| `0x140275ab0` | Toolbar action factory | ~500 B | Creates QAction with name, icon, shortcut for toolbar |
| `0x14026bbb0` | `TagToggleCmd` | 180 B | Entity tag toggle command |
| `0x14026bcd0` | `GenericRemoveComponentCmd` | 319 B | Component removal command |
| `0x14026e350` | `GenericAddComponentCmd` | 437 B | Component addition command |
| `0x14026e630` | `simulate_touch_input_with_mouse_clicks` | 8,598 B | Touch simulation |

### ECS World

| Address | Name | Size | Description |
|---------|------|------|-------------|
| `0x1400be3a0` | `boldshutting_down_world` | 961 B | Flecs world shutdown (calls world.c:536) |
| `0x140399630` | Flecs log function | varies | Internal Flecs logging (called from world.c) |
| `0x1403a6e90` | Flecs entity operation | varies | Entity management |
| `0x140396bb0` | Flecs internal | varies | Internal Flecs operation |
| `0x1400bee50` | Flecs system run | varies | Runs ECS systems |
| `0x1403978c0` | Flecs cleanup | varies | Internal cleanup |
| `0x1403b2770` | Decoration operation | varies | Entity decoration management |
| `0x1403b5840` | Table iterator size | varies | Flecs table iteration |
| `0x1403b56f0` | Table iterator access | varies | Flecs table element access |
| `0x14039fb20` | Entity operation | varies | Entity-level operation |
| `0x1403c57b0` | ECS delete target | varies | Deletes ECS target entity, passes "World" string |

### Luau VM & Compiler

| Address | Name | Size | Description |
|---------|------|------|-------------|
| `0x140475b30` | `s_bytecode_type_version_mismatch_expected_dd` | 4,432 B | Bytecode loading and version checking |
| `0x1406b8ef0` | `lua_exception_Constructor_or_Destructor` | 65 B | Luau exception object |
| `0x1406b8f40` | `lua_exception` | 76 B | Luau exception throw |
| `0x1406ba280` | `lua_exception_unexpected_exception_status` | 104 B | Exception status handler |
| `0x1406cbc10` | `expression_only_compiled_for_side_effects` | 591 B | Compiler optimization warning |
| `0x14079ec80` | `luaucststatdowithstatsstart` | 543 B | Luau CST statistics |

### Luau AST Costructors (sample)

| Address | Class | Description |
|---------|-------|-------------|
| `AstExprBinary.c` | `Luau::AstExprBinary` | Binary expression node |
| `AstExprCall.c` | `Luau::AstExprCall` | Function call node |
| `AstExprConstantBool.c` | `Luau::AstExprConstantBool` | Boolean literal |
| `AstExprConstantNil.c` | `Luau::AstExprConstantNil` | Nil literal |
| `AstExprConstantNumber.c` | `Luau::AstExprConstantNumber` | Number literal |
| `AstExprConstantString.c` | `Luau::AstExprConstantString` | String literal |
| `AstExprError.c` | `Luau::AstExprError` | Error expression |
| `AstExprFunction.c` | `Luau::AstExprFunction` | Anonymous function |
| `AstExprGlobal.c` | `Luau::AstExprGlobal` | Global variable ref |
| `AstExprGroup.c` | `Luau::AstExprGroup` | Parenthesized expr |
| `AstExprIfElse.c` | `Luau::AstExprIfElse` | Ternary expression |
| `AstExprIndexExpr.c` | `Luau::AstExprIndexExpr` | Bracket index |
| `AstExprIndexName.c` | `Luau::AstExprIndexName` | Dot index |
| `AstExprInstantiate.c` | `Luau::AstExprInstantiate` | Type instantiation |
| `AstExprInterpString.c` | `Luau::AstExprInterpString` | Interpolated string |
| `AstExprLocal.c` | `Luau::AstExprLocal` | Local variable ref |
| `AstExprTable.c` | `Luau::AstExprTable` | Table constructor |
| `AstExprTypeAssertion.c` | `Luau::AstExprTypeAssertion` | Type coercion |
| `AstExprUnary.c` | `Luau::AstExprUnary` | Unary operation |
| `AstExprVarargs.c` | `Luau::AstExprVarargs` | Varargs expression |

### Launcher/Updater

| Address | Name | Description |
|---------|------|-------------|
| `0x140001ca0` | `usage_luduvoapp_mode_options_luduvo_uri_proj` | CLI usage string |
| `0x140001da0` | `uurlluduvo_protocol` | luduvo:// URI handler |

### Decompiled Function Categories (from INDEX.md)

Key function groups discovered through string-based renaming:

- **`lua/`** - Luau VM core (1 function)
- **`c_stack/`** - C stack overflow handling (3 functions)
- **`lua_exception/`** - Exception handling (2 functions)
- **`compileerror_constructor/`** - Compilation error (1 function)
- **`s_bytecode/`** - Bytecode operations (1 function)
- **`allocation_*/`** - Memory allocation in compiler (3 functions)
- **`exceeded_*/`** - Compiler limit checks (12+ functions)
- **`ecs_query/`** - ECS query engine (3 functions)
- **`ecs_observer/`** - ECS observer system (2 functions)
- **`camera_subsystem/`** - Camera management (3 functions)
- **`playtest/`** - Playtest system (3 functions)
- **`use_ecs/`** - ECS initialization (1 function)

---

## Flecs ECS Internals

### Source Path Discovery

Strings embedded in the binary reveal the Flecs source tree:

```
/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/world.c
```

### World Lifecycle (from boldshutting_down_world @ 0x1400be3a0)

```
1. Log: "#[bold]shutting down world" (world.c:1270)
2. Set shutdown flag (param_1 + 0xBB8) |= 8
3. Get system entity: 0x8000012600000000
4. Run deinit phase 1 systems
5. Set shutdown flag |= 0x10
6. Call decoration deinit callbacks
7. Clear decorations array
8. Deinit tables (param_1 + 0x808)
9. Free table storage
...
X. Log: "world destroyed, bye!" (world.c:1347)
```

### World Object Structure (partial reconstruction)

```
ecs_world_t:
  +0x000  vtable / header
  +0x808  table array (vector)
  +0x9D0  entity array pointer
  +0xBB8  flags (bit 3 = shutting_down, bit 4 = deinit_phase2)
  +0xD40  decorations vector
  +0xD50  ? (passed to something with string "ecs_world_t")
```

### World Bootstrap (from use_ecs_mini_to_create_world_without_importing)

```
1. Log: "bootstrapping world" (world.c:1061)
2. ecs_mini init (world.c:1064-1067)
3. Log: "world ready!" (world.c:1050)
```

### ECS Module Strings

Found in the binary:
```
s_FLECS_STATS
s_FLECS_MODULE
```

---

## Luau VM Details

### Bytecode Loading (s_bytecode_type_version_mismatch_expected_dd @ 0x140475b30)

This 4,432-byte function handles:
1. Reading bytecode header/magic
2. Version checking and mismatch reporting
3. Bytecode deserialization (proto, constants, instructions, debug info)
4. Loading into the VM state

The function name implies it handles the `"bytecode type/version mismatch, expected %d/%d"` error path, suggesting Luduvo validates Luau bytecode format strictly.

### Compiler Error Handling

From the decompiled functions:

```
Luau::CompileError constructor/destructor uses:
  - allocation_table_array_d: "table array" errors
  - allocation_closure_with_d_upvalues: "closure with %d upvalues" errors
  - Various allocation failures during AST construction

expression_only_compiled_for_side_effects (@ 0x1406cbc10):
  - Warning about expressions compiled purely for their side effects
```

### AST Visitor Pattern

`Luau::AstVisitor` (RTTI #720) is present, confirming the compiler uses the visitor pattern for tree traversal, type checking, and code generation.

### Compiler Assignment Tracking

Decompiled function signature found:

```cpp
void Luau::Compiler::resolveAssignConflicts(
    Luau::AstStat*,
    std::vector<Luau::Compiler::Assignment>&,
    Luau::AstArray<Luau::AstExpr*> const&
)
```

This is called during the compilation phase to resolve variable assignment conflicts before code generation.

---

## Qt Integration Details

### Imported Qt Functions (key ones from string table)

```
?addAction@QWidget@@QEAAPEAVQAction@@AEBVQString@@AEBVQKeySequence@@@Z
?keyBindingsForAction@QAccessibleWidget@@UEBA?AV?$QList@VQString@@@@AEBVQString@@@Z
?keyPressEvent@QAbstractButton@@MEAAXPEAVQKeyEvent@@@Z
?keyPressEvent@QTreeView@@MEAAXPEAVQKeyEvent@@@Z
?keyPressEvent@QWidget@@MEAAXPEAVQKeyEvent@@@Z
?keyReleaseEvent@QWidget@@MEAAXPEAVQKeyEvent@@@Z
?keyboardSearch@QAbstractItemView@@UEAAXAEBVQString@@@Z
?setShortcut@QAction@@QEAAXAEBVQKeySequence@@@Z
?shortcut@QAction@@QEBA?AVQKeySequence@@XZ
```

### Toolbar Construction (add_script_to_selected_entity analysis)

The toolbar at `0x140271f60` creates:

1. **QToolBar** named `"MainToolBar"` (title: "Tools")
   - `setMovable(false)`
   - `setIconSize(24, 24)`

2. **QActionGroup** (exclusive):
   - **Select** (`1`): `select.svg` icon, `QKeySequence("1")`
   - **Move** (`2`): `translate.svg` icon, `QKeySequence("2")`
   - **Scale** (`3`): `scale.svg` icon, `QKeySequence("3")`
   - **Rotate** (`4`): `rotate.svg` icon, `QKeySequence("4")`

3. **Play/Stop Toggle** at offset `0x43D70` in EditorMainWindow:
   - State 0: Play icon, "Play (F5)" tooltip, enabled
   - State 1: Stop icon, "Cancel Playtest Start (F5)" tooltip
   - Other: Stop icon, "Stop (F5)" tooltip
   - Also controls:
     - `+0x43D78`: Action enabled when state > 1
     - `+0x43D80`: Action enabled when state == 3
     - `+0x43D88`: "Client" checkbox

4. **Custom Widgets** added via `QToolBar::addWidget()`
5. **Separators** added via `QToolBar::addSeparator()`

### EditorMainWindow Structure (offsets from decompilation)

```
EditorMainWindow:
  +0x2D37  QAction* (Play action related)
  +0x2D38  Various QAction/QWidget pointers
  +0x2D3A  QAction pointers array
  +0x2D3B  Additional QAction
  +0x34E   QToolBar* (MainToolBar)
  +0x43D70  QAction* (Play/Stop action)
  +0x43D78  QAction* (action controlled by play state)
  +0x43D80  QAction* (action controlled by play state)
  +0x43D88  QAction* ("Client" checkbox action)
  +0x43DA0  QWidget* (corner widget)
```

---

## Graphics Backend Details

### D3D12 (primary)

```
tracyd3d12_submitted                         @ INDEX
tracyd3d12_failed                            @ INDEX (3 functions)
d3d12_could                                  @ INDEX
d3d12_warning                                @ INDEX
staticdescriptorheap_constructor             @ INDEX (2 functions)
createheap_call                              @ INDEX
luduvo_d3d12                                 @ INDEX (3 functions)
```

### Vulkan (optional)

```
vk_error                                     @ INDEX (24 functions)
vulkan_conformance                           @ INDEX
sdl_vulkan                                   @ INDEX
vkgetfencestatus                             @ INDEX
vkcreatewin32surfacekhr_failed               @ INDEX
vulkan_already                               @ INDEX (2 functions)
vulkan_is                                    @ INDEX
```

### NVRHI (Render Hardware Interface)

```
wr_transparent_count                         @ INDEX (6,678 bytes)
wr_upload_transparent_draws                  @ INDEX (1,573 bytes)
```

### Shader Programs Found

```
camera_vp                                    (camera view-projection)
clustered_forward                            (forward rendering)
clustered_assign                             (light assignment)
shadow_pass                                  (shadow mapping)
sun_shadow / point_shadow / spot_shadow      (shadow types)
postfx_bloom / postfx_smaa                   (post-processing)
gtao_linear                                  (ambient occlusion)
atmosphere_transmittance / multi_scatter     (atmosphere)
oit                                          (order-independent transparency)
indirect_draw / instance_index               (GPU-driven rendering)
skybox_vertex                                (skybox)
```

---

## Networking Internals

### httplib Integration

```
SocketStream_Constructor_or_Destructor       @ 0x1401c7bf0
proxy_authenticate                           @ 0x1401c7e20 (3,667 bytes)
proxy_authorization                          @ 0x1401ca780 (11,846 bytes)
ssl_server_hostname_verification_failed      @ 0x1401c4100
http_11rn                                    @ 0x1401d0490
```

### WinHTTP Usage

```
WinHttpCloseHandle
WinHttpConnect
WinHttpCrackUrl
WinHttpOpen
WinHttpOpenRequest
WinHttpQueryDataAvailable
WinHttpQueryHeaders
WinHttpReadData
WinHttpReceiveResponse
WinHttpSendRequest
WinHttpSetTimeouts
```

### API Endpoints Discovered

```
https://assets.luduvo.com/channels/stable/windows-x86_64.txt    (manifest)
/places/%lld/world                                                (world upload)
```

### Authentication

```
auth                                         @ INDEX (4 functions)
auth_user                                    @ INDEX
auth_headshot                                @ INDEX (2 functions)
token_encryption                             @ INDEX
mfa_required                                 @ INDEX
login_dialog / publish_dialog               (UI)
```

---

## Input Handling Internals

### SDL2 Input Stack

```
SDL keyboard/gamepad event handling:
sdl_event_gamepad_steam_handle_updated       @ INDEX
sdl_event_queue_statistics                   @ INDEX
sdl_windows_close_on_alt_f4                  @ INDEX
keyboard_u_not_found                         @ INDEX
mouse_u                                      @ INDEX
```

### Gamepad/Controller Support

```
SDL joystick:     71 functions
HIDAPI devices:   PlayStation (PS3/4/5/DualSense), Nintendo (Switch/Joy-Con), Xbox
XInput:           Xbox 360/One controllers
GameInput:        Windows.Gaming.Input API
DirectInput:      Legacy controller support
Steam Input:      Steam controller integration
```

### Key Qt Widgets with Input Handling

```
QAbstractButton::keyPressEvent
QAbstractItemView::keyPressEvent
QAbstractScrollArea::keyPressEvent
QTreeView::keyPressEvent
QAbstractSpinBox::keyPressEvent
QDialog::keyPressEvent
QLabel::keyPressEvent
QLineEdit::keyPressEvent
QMenu::keyPressEvent
QPlainTextEdit::keyPressEvent
QPushButton::keyPressEvent
QWidget::keyPressEvent
QWidget::keyReleaseEvent
```

---

## Audio Stack

```
OPENAL32.DLL (24 functions):
  alListenerf, alSourcei, alSourcePlay, alSourceStop
  alcOpenDevice, alcCreateContext, alcMakeContextCurrent
  alDistanceModel, alDopplerFactor, alSpeedOfSound
  alGenBuffers, alBufferData, alGetError, alDeleteBuffers
  alGenSources, alDeleteSources, alSource3f, alSourcef
```

Plus SDL2 audio backends:
- DirectSound (Windows)
- WASAPI (Windows)
- Wave file support (extensible and standard)

---

## Launcher/Updater Architecture

### Update Flow

```
1. Fetch manifest from: https://assets.luduvo.com/channels/stable/windows-x86_64.txt
2. Compare version/seq with local state.json
3. Download bundle.zip to bundle.tmp.zip
4. Verify Ed25519 signature
5. Verify SHA256 hash
6. Extract to bundle_new/
7. Rename bundle/ -> bundle_old/, bundle_new/ -> bundle/
8. Launch LuduvoApp.exe
```

### Key Launcher Functions (from decompiled strings)

```
launcher_main                                  @ 0x140078f9c
launcher::check_and_apply                      @ 0x140077a0e
launcher::extract_zip                          @ 0x140077dbd
launcher::save_state                           @ 0x140078355
launcher::register_protocol_handler            @ 0x140077cde
```

### Launcher Source Paths (from debug strings)

```
/opt/actions-runner/_work/Platform/Platform/launcher/main.cpp
/opt/actions-runner/_work/Platform/Platform/launcher/updater.cpp
/opt/actions-runner/_work/Platform/Platform/launcher/platform_win32.cpp
```

---

## Cryptographic & Security

### Embedded Libraries

```
OpenSSL (static-linked)
  - TLS/SSL (client and server)
  - All major cipher suites (AES-GCM, AES-CCM, CAMELLIA, ARIA, SM4, DES-EDE3)
  - All SHA variants (SHA1, SHA2, SHA3)
  - BLAKE2 (BLAKE2B-512, BLAKE2S-256)
  - Post-quantum: ML-DSA (44, 65, 87 levels) + SLH-DSA
  - Ed25519 (signature verification for updates)
```

### Certificate & Key Handling

```
BCrypt (Windows crypto API)
  BCryptOpenAlgorithmProvider
  BCryptCreateHash
  BCryptHashData
  BCryptFinishHash
  BCryptDestroyHash
  BCryptCloseAlgorithmProvider
```

---

## Miscellaneous Libraries

| Library | Version/Info | Purpose |
|---------|-------------|---------|
| Tracy | Static-linked | CPU/GPU profiler |
| Quill | v11 (backend) + v12 (fmtquill) | Async logging |
| Qlementine | oclero::qlementine | Qt theming/style engine |
| Advanced Docking System | ads_* | Dockable widget system |
| Jolt Physics | JPH namespace | Physics engine |
| miniz | Static-linked | ZIP compression |
| cJSON | Static-linked | JSON parsing |
| fmtlib | fmtquill::v12 | String formatting |
| FreeType / HarfBuzz | For text rendering | Font rendering |

---

## Ghidra Analysis Methodology

Tools and scripts used during reverse engineering:

1. **RTTI Demangling**: Script to collect and demangle MSVC RTTI `.?AV` strings
2. **Log String Renaming**: Automated renaming of functions based on embedded log format strings
3. **Function Body Analysis**: Size distribution, instruction counts
4. **Import/Export Enumeration**: Full DLL import table extraction
5. **Decompilation Export**: Batch export of all decompiled functions to C files
6. **Keybind Analysis**: Targeted decompilation of functions referencing Qt shortcut/action APIs
7. **String Extraction**: Full string table with addresses

### Analysis Files Produced

```
ghidra_project_bundle/
├── decompiled/                    # 20,068 decompiled C functions
│   ├── INDEX.md                   # Full function index with addresses
│   └── functions/                 # Organized by inferred category
├── keybind_analysis/              # 49 targeted keybind-related functions
├── rtti_demangle_report.txt       # 987 demangled RTTI class names
├── rtti_count_results.txt         # Structural analysis of recovered types
├── renamed_list.txt               # 20,069 renamed function names
├── func_report.txt                # Function body size statistics
├── fid_report.txt                 # Function ID library matches
├── ghidra_extraction_results.txt  # Full import/export/string dump
├── decomp_report.txt              # Decompilation success rates
├── decomp_errors.txt              # Decompilation failure details
├── decomp_sample.txt              # Sample decompilation outputs
└── log_renamer_report.txt         # Log-string-based renaming report
```
