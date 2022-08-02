cmake_minimum_required(VERSION 3.22)

project(IGT)

include_directories(include)
add_subdirectory(SDL)
include_directories(SDL/include)

# sdl2
# monkey patch for linking errors
add_definitions(-DHAVE_LIBC)
add_definitions(-DHAVE_STDIO_H)

add_library(ImGUI
    imgui/imgui.cpp
    imgui/imgui_demo.cpp
    imgui/imgui_draw.cpp
    imgui/imgui_tables.cpp
    imgui/imgui_widgets.cpp

    imgui/imgui_impl_sdl.cpp
    imgui/imgui_impl_opengl3.cpp
)

add_executable(ImGuiThemer
    main.cpp
    draw.cpp
)

target_link_libraries(ImGuiThemer SDL2main SDL2 ImGUI)

if (WIN32)
    target_link_libraries(ImGuiThemer OpenGL32)
else()
    target_link_libraries(ImGuiThemer OpenGL)
endif()