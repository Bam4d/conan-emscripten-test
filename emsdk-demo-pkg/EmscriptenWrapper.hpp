#pragma once

#include <iostream>
#include <zlib.h>

#include <emscripten/bind.h>

class EmscriptenWrapper {

  EmscriptenWrapper();

  std::string ZlibVersion();
}

EMSCRIPTEN_BINDINGS(ZlibJS) {

  e::class_<EmscriptenWrapper>("EmscriptenWrapper")
      .constructor()
      .function("ZlibVersion", &EmscriptenWrapper::ZlibVersion);
}
