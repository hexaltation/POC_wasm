# POC_wasm
## First POC with wasm &amp; emscripten

The c program write.c is compiled with emscripten.  
You can clone or fork the project here:
https://github.com/kripken/emscripten

Once the toolchain is setup :

```bash
emcc write.c -s WASM=1 -o write.html
```

It's generate write.html, write.js, write.wasm.

Input and button have been added to write.html.  
write.js have been modified to relaunch c program each time the button is clicked.
