cmake_minimum_required(VERSION 3.20)
project(saiko-injector LANGUAGES CXX)

include(version.cmake)

if(NOT CMAKE_SIZEOF_VOID_P EQUAL 8)
    message(FATAL_ERROR "This project requires a 64-bit build. Use a 64-bit generator (e.g. -A x64).")
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_compile_options(/W4 /WX /utf-8)

# shared : interface library with source propagation
# Sources added to an INTERFACE target are compiled separately by each
# consuming target, so shared.cpp picks up the correct CRT setting (/MT for
# payload, /MD for injector) without an OBJECT-library CRT mismatch.
add_library(shared_common INTERFACE)
target_include_directories(shared_common INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/injector
    ${CMAKE_CURRENT_SOURCE_DIR}/payload
    ${CMAKE_CURRENT_SOURCE_DIR}/shared
    ${CMAKE_CURRENT_BINARY_DIR}/generated
)
target_sources(shared_common INTERFACE
    shared/shared.cpp
    shared/shared.h
    shared/qt_proxy.cpp
    shared/qt_proxy.h
)

# payload.dll
# /MT static CRT, /DYNAMICBASE, /NXCOMPAT
add_library(payload SHARED
    payload/dllmain.cpp
    payload/pipe_server.cpp
    payload/pipe_server.h
    payload/keybind.cpp
    payload/keybind.h
    payload/ecs_hook.cpp
    payload/ecs_hook.h
    payload/sdl_hook.cpp
    payload/sdl_hook.h
    payload/troll.cpp
    payload/troll.h
)
target_link_libraries(payload PRIVATE shared_common)
target_link_options(payload PRIVATE /DYNAMICBASE /NXCOMPAT)
set_target_properties(payload PROPERTIES
    MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>"
)

# injector.exe
# /MD dynamic CRT, console subsystem for debug output.
# wWinMainCRTStartup is needed because main.cpp uses wWinMain; the console
# subsystem normally expects main / wmain.
add_executable(injector
    injector/main.cpp
    injector/find_process.cpp
    injector/find_process.h
)
target_link_libraries(injector PRIVATE shared_common)
target_link_options(injector PRIVATE /SUBSYSTEM:CONSOLE)
set_target_properties(injector PROPERTIES
    MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>DLL"
)
