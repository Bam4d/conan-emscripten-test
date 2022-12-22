#pragma once

#include <iostream>
#include <zlib.h>

#include <emscripten/bind.h>
#include <glm/glm.hpp>
#include <yaml-cpp/yaml.h>

class EmscriptenWrapper {

public:
  EmscriptenWrapper();
  std::string ZlibVersion();
  std::string GLMVersion();
  std::string YAMLVersion();
};

EMSCRIPTEN_BINDINGS(ZlibJS) {

  emscripten::class_<EmscriptenWrapper>("EmscriptenWrapper")
      .constructor()
      .function("ZlibVersion", &EmscriptenWrapper::ZlibVersion)
      .function("glm", &EmscriptenWrapper::GLMVersion)
      .function("yamlcpp", &EmscriptenWrapper::YAMLVersion);
}
