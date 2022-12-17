if [ ! -d "build_wasm" ]; then
    mkdir build_wasm
fi

pushd build_wasm
    cmake .. -B .
    make
popd


