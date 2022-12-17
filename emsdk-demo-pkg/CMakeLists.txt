cmake_minimum_required(VERSION 3.15)

project(EmscriptenWrapper)

find_package(ZLIB REQUIRED)

add_executable(EmscriptenWrapper EmscriptenWrapper.cpp)
set_target_properties(EmscriptenWrapper PROPERTIES LINK_FLAGS "--bind")
set_target_properties(EmscriptenWrapper PROPERTIES SUFFIX ".js")
target_link_libraries(EmscriptenWrapper PRIVATE ZLIB::ZLIB)
