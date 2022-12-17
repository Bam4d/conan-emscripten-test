cmake_minimum_required(VERSION 3.15)

project(ConanHello)

if(NOT EXISTS "${CMAKE_BINARY_DIR}/conan.cmake")
  message(STATUS "Downloading conan.cmake from https://github.com/conan-io/cmake-conan")
  file(DOWNLOAD "https://raw.githubusercontent.com/conan-io/cmake-conan/0.18.1/conan.cmake"
    "${CMAKE_BINARY_DIR}/conan.cmake"
    TLS_VERIFY ON)
endif()

include(${CMAKE_BINARY_DIR}/conan.cmake)

conan_cmake_configure(
  REQUIRES
  emsdk-demo-pkg/0.1
  GENERATORS
  cmake_find_package
  cmake_paths
)

conan_cmake_install(
  PATH_OR_REFERENCE .
  CONAN_COMMAND ${CONAN}
  ${CONAN_EXTRA_REQUIRES}
  OPTIONS
  ${CONAN_EXTRA_OPTIONS}
  PROFILE_HOST emsdk
  PROFILE_BUILD default
  BUILD missing
)

include(${PROJECT_BINARY_DIR}/conan_paths.cmake)

find_package(emsdk-demo-pkg)

add_executable(main main.cpp)
target_link_libraries(main emsdk-demo-pkg::emsdk-demo-pkg)