if [ ! -d "build_wasm" ]; then
    mkdir build_wasm
fi

conan install consumer/conanfile.txt --profile:host conan-profiles/emscripten.profile --profile:build default --build missing -if build_wasm
cmake consumer -B build_wasm -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake
cmake --build build_wasm

node consumer/app.js
