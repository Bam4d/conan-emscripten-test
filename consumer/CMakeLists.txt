cmake_minimum_required(VERSION 3.15)

project(ConanHello)

find_package(ZLIB)
find_package(glm)
find_package(yaml-cpp)


message(STATUS Zlib: ${ZLIB_FOUND})
message(STATUS GLM: ${glm_FOUND})
message(STATUS yaml-cpp: ${yaml-cpp_FOUND})

message(STATUS Zlib: ${ZLIB_INCLUDE_DIRS})
message(STATUS GLM: ${glm_INCLUDE_DIRS})
message(STATUS yaml-cpp: ${yaml-cpp_INCLUDE_DIRS})


add_executable(main ../EmscriptenWrapper/EmscriptenWrapper.cpp)
set_target_properties(
  main
  PROPERTIES
  LINK_FLAGS
  "-lembind -sMODULARIZE=1"
)
target_link_libraries(main ZLIB::ZLIB glm::glm yaml-cpp)