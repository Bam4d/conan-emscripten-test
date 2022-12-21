#include "EmscriptenWrapper.hpp"

EmscriptenWrapper::EmscriptenWrapper() {}

std::string EmscriptenWrapper::ZlibVersion() {
  return std::string(zlibVersion());
}

std::string EmscriptenWrapper::GLMVersion() {

  auto vec = glm::ivec2(0.1, 0.2);

  if (vec.x == 0.1) {
    return std::string("test");
  }

  return "test";
}

std::string EmscriptenWrapper::YAMLVersion() {
  YAML::Node node;

  if (node.IsDefined()) {
    return "test";
  }

  return "test";
}