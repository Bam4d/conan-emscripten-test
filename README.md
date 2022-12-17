# conan-emscripten-demo

Minimal reproducible example for fixing emsdk + conan + emscripten builds.

To cross-compile with emscripten you have to first create an emscripten-based toolchain and compile the dependencies using this:

```
conan install consumer/conanfile.txt --profile:host conan-profiles/emscripten.profile --profile:build default --build missing -if build_wasm
```

The conanfile tells `conan install` to export the toolchain using the `CMakeToolchain` generator so it can be used in the cmake step:

```
cmake consumer -B build_wasm -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake
```

Finally you build the project:

```
cmake --build build_wasm
```


And you run the example:

```
node consumer/app.js
```


## Complete steps

All steps are contained in the following script

```
./run.sh
```

