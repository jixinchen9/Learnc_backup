#ifndef GUARD_Student_info
#define GUARD_Student_info
//student info header file


#include<iostream>
#include<string>
#include<vector>

//define a new kind of type student_info for the eponymous purpose
struct Student_info {
    std::string name; 
    double midterm, final; 
    std::vector<double> homework;
};

//DECLARE function which defines a way to sort struct instances based on a field
bool compare(const Student_info&, const Student_info&);

//DECLARE a function which defines a way to fill in the struct
std::istream& read(std::istream&, Student_info&);

//DECLARE a function which defines a way to fill in the homework vector
std::istream& read_hw(std::istream&, std::vector<double>&);

#endif