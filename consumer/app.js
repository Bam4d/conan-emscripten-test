const c_funtions = require('./bin/wrapper.js');

c_funtions().then((instance) => {
    var ZlibVersion = instance.cwrap('ZlibVersion', 'string', []);
    console.log("zlib version is: " + ZlibVersion());
});

cpp_funtions.onRuntimeInitialized = async _ => {
    zlibVersion = cpp_funtions.ZlibVersion();
    console.log("zlib version is: " + zlibVersion);
}
