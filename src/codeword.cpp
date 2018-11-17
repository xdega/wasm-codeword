#include <iostream>
#include <cstdlib>
#include <string>
#include <regex>
#include <emscripten/bind.h>

using namespace emscripten;

std::string getCodeword(std::string str) {
    std::regex pattern("[a,e,i,o,u]");
    str = std::regex_replace(str, pattern, "_");
    return str;
}

EMSCRIPTEN_BINDINGS(codeword) {
    function("getCodeword", &getCodeword);
}

