#include "library.h"

#include <emscripten/bind.h>
using namespace emscripten;

std::string encode(std::string const& str)
{
    std::string ans = str;
    for (size_t i = 0; i < str.size(); ++i)
    {
        ans[i] = (str[i] + MAGIC) % 256;
    }
    return ans;
}
std::string decode(std::string const& str)
{
    std::string ans = str;
    for (size_t i = 0; i < str.size(); ++i)
    {
        ans[i] = (str[i] - MAGIC + 256) % 256;
    }
    return ans;
}

EMSCRIPTEN_BINDINGS(my_module) {
    function("encode", &encode);
    function("decode", &decode);
}
