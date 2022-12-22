wrapper = require("../build_wasm/main.js");

wrapper().then(function(result) {
  zlibWrapper = new result.EmscriptenWrapper()

  console.log("Hello from javascript!! the version of zlib compiled with emscripten is", zlibWrapper.ZlibVersion());
  console.log("Hello from javascript!! the version of glm compiled with emscripten is", zlibWrapper.glm());
  console.log("Hello from javascript!! the version of yamlcpp compiled with emscripten is", zlibWrapper.yamlcpp());
});