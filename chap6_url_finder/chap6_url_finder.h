// chap6_url_finder.h : Include file for standard system include files,
// or project specific include files.

#ifndef GUARD_url_finder
#define GUARD_url_finder

#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

bool not_url_char(char);

std::string::const_iterator url_end(std::string::const_iterator, std::string::const_iterator);

std::string::const_iterator url_begin(std::string::const_iterator , std::string::const_iterator);

std::vector<std::string> find_urls(const std::string&);

std::string::const_iterator what_is_search(const std::string&, const std::string&);

#endif // !GUARD_url_finder

// TODO: Reference additional headers your program requires here.
