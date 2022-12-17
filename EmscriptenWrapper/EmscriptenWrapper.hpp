#pragma once

#include <iostream>
#include <zlib.h>

#include <emscripten/bind.h>

class EmscriptenWrapper {

public:
  EmscriptenWrapper();
  std::string ZlibVersion();
};

EMSCRIPTEN_BINDINGS(ZlibJS) {

  emscripten::class_<EmscriptenWrapper>("EmscriptenWrapper")
      .constructor()
      .function("ZlibVersion", &EmscriptenWrapper::ZlibVersion);
}
