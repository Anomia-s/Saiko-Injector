#pragma once

void initEcsHook();
void executeLua(const char* code);
void shutdownEcsHook();
const char* getStatus();

// applyKeybind() and reloadKeybinds() are declared in keybind.h
