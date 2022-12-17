#include "EmscriptenWrapper.hpp"


EmscriptenWrapper::EmscriptenWrapper() {
  
}


std::string EmscriptenWrapper::ZlibVersion() { return std::string(zlibVersion()); }