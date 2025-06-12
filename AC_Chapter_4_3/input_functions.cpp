//source file for functions
#include "input_functions.h"

using std::istream;
using std::cout;

istream& read_numbers(std::istream& in, squares& n_struct) {
	in >> n_struct.original;
	n_struct.square = n_struct.original * n_struct.original;

	return in;
}