# conan-emscripten-demo

Minimal reproducible example for fixing emsdk + conan + emscripten builds

## conan-cmake

Build the emscripten demo using conan-cmake

1. Builds a library using emscripten
2. Builds an executable (using emscripten) which Links to the libary -- THIS CURRENTLY FAILS


You can run the entire thing here:
```
./run_no_conan_cmake.sh
```


## Without conan-cmake

Build the emscripten demo using conan directly and setting a CMakeToolchain 

