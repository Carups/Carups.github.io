#ifndef DEC_LIBRARY_H
#define DEC_LIBRARY_H

#include <string>
const int MAGIC = 13;

std::string encode(std::string const& str);
std::string decode(std::string const& str);

#endif