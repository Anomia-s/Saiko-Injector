#pragma once

#include <cstdint>

#ifdef __cplusplus
extern "C" {
#endif

void setupKeyboardHook();
void removeKeyboardHook();
void setCameraRemap(const char* key, const char* newKey);

#ifdef __cplusplus
}
#endif
