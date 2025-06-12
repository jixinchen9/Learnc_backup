//student info source file
#include "Student_info.h"
#include<iostream>
#include<string>
#include<vector>

using std::istream;
using std::vector;
using std::cout;
//performs a string compare of 2 instances of Student_info struct, returns boolean result of compare
//this does alphabetical ascending
bool compare(const Student_info& x, const Student_info& y) {
	return x.name < y.name;
}
//read in stream into Student_info struct fields

istream& read(istream& is, Student_info& s) {
	cout << "name then midterm then final: " << std::endl;
	is >> s.name >> s.midterm >> s.final;
	read_hw(is, s.homework);
	return is;
	//unsure why return
}

istream& read_hw(std::istream& is2, vector<double>& hw) {
	cout << "homework grades: " << std::endl;
	//if istream conmstruction again, what About istream makes this possible
	if (is2) {
		//clear out previous data in main scoped variable
		hw.clear();

		double x;
		while (is2 >> x)
			hw.push_back(x);
			//this adds istream values to the vector
			//because the hw vector is updated by function via ref

		is2.clear();
		//likewise clear the istream object
	}
	return is2;
	//unsure why return
}
