#include "Student_info.h"
#include "grade.h"

#include <list>
#include <iterator>
#include <algorithm>

using std::list;
using std::remove_copy_if;
using std::remove_if;

bool fail_return(const struct Student_info& r) {
	return(grade(r) < 60.0);
}

bool pass_return(const struct Student_info& r) {
	return !fail_return(r);
}

list<Student_info> extract_fails_2pass(list<Student_info>& s) {
	list<Student_info> fails;
	remove_copy_if(s.begin(), s, end(), std::back_inserter(fails), pass_return);
	s.erase(remove_if(s.begin, s.end(), fail_return), s.end());
	//a two input erase erases all elements in range specified
	//remove if returns the new end of range as the end of all remove operations
}
//create function which takes in list of struct student info and returns the same, except the subset is those who failed, 
// the original list will have failing students removed
list<Student_info> extract_fails_naive(list<Student_info>& s) 
{
	//initialize the iterator to the beginning of the list
	list<Student_info>::iterator i = s.begin();
	//intialize the list of fails as well
	list<Student_info> fails;
	while (i != s.end()) {
		//dereference the iterator with *iterator
		if (fail_return(*i)) {
			fails.push_back(*i);
			i = s.erase(i);
			//erase does 2 things, it removes the element corresponding to i and returns a iterator of the next element
		}
		else {
			++i;
		}
	}
	return(fails);
}