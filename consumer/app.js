wrapper = require("../build_wasm/main.js");

wrapper().then(function(result) {
  zlibWrapper = new result.EmscriptenWrapper()

  console.log("Hello from javascript!! the version of zlib compiled with emscripten is", zlibWrapper.ZlibVersion());
});