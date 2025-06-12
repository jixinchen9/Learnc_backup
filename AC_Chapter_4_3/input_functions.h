#ifndef GUARD_input_functions
#define GUARD_input_functions
//define input functions, as well as a container to hold input and squares
#include <iostream>

struct squares {
	int original;
	int square;
};

//declare function to read in integer, then calculate square
std::istream& read_numbers(std::istream&, squares&);
//function returns a istream object for an istream object passed in and the square structure passed in, 
//output istream is ref bc
//input istream is ref bc
//strucutre is ref bc function will update memory for 
#endif
