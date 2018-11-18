## Web Assembly "Codeword" experiment
Minimal experimentation of Web Assembly from a .cpp source file. This is a wildly unneccesary use-case as Javascript already has regex capabilities. 
It is however a simple experiment to demonstrate an alternative way of manipulating strings, while encapsulating the functionality into a wasm binary.

This example is minimal, and ought to be a good starting point to understand how C++ can bind functions, which can then be used in a web browser.

## Dependencies
- Emscripten SDK (https://github.com/juj/emsdk)

## Usage
1. Clone repository
2. Run `emrun --browser chrome codeword.html` 
3. In the console you will see a string output, with the vowels replaces by `_`
4. You can call `Module.getCodeword(str)` where `str` is your own string to be manipulated
