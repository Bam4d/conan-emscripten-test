wrapper = require("../build_wasm/main.js");

wrapper().then(function(result) {
  zlibWrapper = new result.EmscriptenWrapper()

  console.log(zlibWrapper.ZlibVersion());
});