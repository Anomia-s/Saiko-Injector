#pragma once

#include <cstdint>

#ifdef __cplusplus
extern "C" {
#endif

void applyKeybinds();
void applyKeybind(const char* actionName, const char* newShortcut);
void reloadKeybinds();

#ifdef __cplusplus
}
#endif
