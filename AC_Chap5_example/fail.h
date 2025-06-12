#ifndef GUARD_fail
#define GUARD_fail
#include <list>

//define the fail function
bool fail_return(const struct Student_info&);

std::list<Student_info> extract_fails_naive(std::list<Student_info>&);
#endif // !GUARD_fail