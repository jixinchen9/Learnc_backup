// AC_Chapter_4_3.cpp : Defines the entry point for the application.
//

#include "AC_Chapter_4_3.h"
#include "input_functions.h"

using namespace std;
using std::vector;
using std::cout;
using std::cin;
using std::setw;

int main()
{
	vector<squares> numbers_and_squares;
	squares current_pair;
	// write the while cin routine
	cout << "type in some integer numbers, and eof when done: " << std::endl;
	while (read_numbers(cin, current_pair)) {
		numbers_and_squares.push_back(current_pair);
	}
	// display the numbers at the end of input 

	for (vector<squares>::size_type i = 0; i != numbers_and_squares.size(); ++i) {
		cout << setw(10) << numbers_and_squares[i].original << setw(10) << numbers_and_squares[i].square << std::endl;
	}
}
