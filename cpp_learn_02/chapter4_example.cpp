#include<iostream>
#include<algorithm>
#include<iomanip>
#include<ios>
#include<stdexcept>
#include<string>
#include<vector>
//#include <istream>
#include "Student_info.h"
#include "median.h"
#include "grade.h"

using std::cout;
using std::cin;
using std::vector;
using std::string;
using std::istream;
using std::setprecision;
using std::sort;
using std::domain_error;
using std::streamsize;
using std::endl;
using std::max;
using std::vector;

int main() {
    //student must enter name, final grade, midterm grade, and homework grades
    //the entries should then be written into a structure 
    //the homework grade should be calculated by finding the median
    //then the final grade should be output
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlength = 0;

    while (read(cin,record)) {
        //find length of longest name
        maxlength = max(maxlength, record.name.size());
        students.push_back(record);
    }

    // typedef: we are saying the name we chose is a synonym for the given type vector<double>>::size_type 
    // rather than a variable to hold the value of the type

    // sort the inputs based on alpahbet
    sort(students.begin(), students.end(),compare);

    // write names and grades i give up
    for (vector<Student_info>::size_type i = 0; i != students.size(); ++i) {
        cout << students[i].name << string(maxlength + 1 - students[i].name.size(), '#');
        //call for grade calculation
        try{
            double big_grade = grade(students[i]);
            //next part seems extra, though syntax looks interesting
            streamsize prec = cout.precision();
            cout << setprecision(3) << big_grade << setprecision(prec);
        }
        catch (domain_error e) {
            cout << e.what();
        }
        cout << endl;
    }
    return 0;
}