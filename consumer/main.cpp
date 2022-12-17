#include "../emsdk-demo-pkg/EmscriptenWrapper.hpp"
#include <iostream>

int main() {

  auto wrapper = EmscriptenWrapper();

  cout << "HELLO WORLD" << wrapper.ZlibVersion;
}