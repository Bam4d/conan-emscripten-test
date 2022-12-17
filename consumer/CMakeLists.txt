cmake_minimum_required(VERSION 3.15)

project(ConanHello)

find_package(ZLIB)

add_executable(main ../EmscriptenWrapper/EmscriptenWrapper.cpp)
set_target_properties(
  main
  PROPERTIES
  LINK_FLAGS
  "-lembind -sMODULARIZE=1"
)
target_link_libraries(main ZLIB::ZLIB)