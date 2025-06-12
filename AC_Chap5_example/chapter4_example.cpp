#include<iostream>
#include<algorithm>
#include<iomanip>
#include<ios>
#include<stdexcept>
#include<string>
#include<vector>
#include<list>
//#include <istream>
#include "Student_info.h"
#include "median.h"
#include "grade.h"
#include "fail.h"
#include "analysis.h"

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
using std::list;


int main() {
    typedef list<Student_info> biglist;
    typedef  biglist::iterator biglist_it;
    biglist students;

    vector<Student_info> did, didnt;
    
    while (read(cin, record)) {
        if (did_hw(record))
            did.push_back(record);
        else
            didnt.push_back(record);
    }

    if did.empty() {
        cout << "no student did all hw" << endl;
        return 1;
    }
    if didnt.empty() {
        cout << "all students did all hw" << endl;
        return 1;
    }

    write_analysis(cout, "median", median_analysis, did, didnt);
    return 0;
}
/*
int main() {
    //student must enter name, final grade, midterm grade, and homework grades
    //the entries should then be written into a structure 
    //the homework grade should be calculated by finding the median
    //then the final grade should be output
  
    Student_info record;
    string::size_type maxlength = 0;
    
    typedef list<Student_info> biglist;
    typedef  biglist::iterator biglist_it;
    biglist students;

    while (read(cin,record)) {
        //find length of longest name
        maxlength = max(maxlength, record.name.size());
        students.push_back(record);
    }

    // typedef: we are saying the name we chose is a synonym for the given type vector<double>>::size_type 
    // rather than a variable to hold the value of the type

    // sort the inputs based on alphabet
    //sort(students.begin(), students.end(),compare);

    // write names and grades i give up
    for (list<Student_info>::iterator i = students.begin(); i != students.end(); ++i) {
        cout << i->name << string(5, '>');
        //this used to be in there maxlength + 1 - i->name.size()
        //call for grade calculation
        try{
            double big_grade = grade(*i);
            //next part seems extra, though syntax looks interesting
            streamsize prec = cout.precision();
            cout << setprecision(3) << big_grade << setprecision(prec);
        }
        catch (domain_error e) {
            cout << e.what();
        }
        cout << endl;
    }
    //print the ppl who failed
    list<Student_info> failed_students = extract_fails(students);
    for (list<Student_info>::iterator i = failed_students.begin(); i != failed_students.end(); ++i) {
        cout << i->name << endl;
    }
    return 0;
}
*/