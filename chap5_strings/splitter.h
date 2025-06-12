#ifndef GUARD_splitter
#define GUARD_splitter
#include <string>
#include <vector>

bool space(std::char);

bool not_space(std::char);

std::vector<std::string> split(const std::string&);

std::vector<std::string> split_depr(const std::string&);

std::string::size_type width(const std::vector<std::string>&);

std::vector<std::string> frame(const std::vector<std::string>&);
#endif // !1
