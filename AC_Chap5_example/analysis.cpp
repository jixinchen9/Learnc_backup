#include "analysis.h"
#include "Student_info.h"

#include <vector>
#include <iterator>
#include <list>

using std::list;
using std::vector;
double median_analysis(const list<Student_info>& students) {

    vector<double> final_grades;
    std::transform(students.begin(), students.end(), std::back_inserter(final_grade), grade_safe);
    //why back_inserter instead of begin, bc it's an append, rather than overwriting same thing over and over
    return(median(final_grades));

}

void write_analysis(ostream& out, const string& name, double analysis(const list<Student_info>&), const vector<Student_info>& did, const vector<Student_info>& didnt) {
    //this is demo of method to pass a function by a generic name to another function
    out << name << ": median(did) = " << analysis(did) << ", median(didnt) = " << analysis(didnt) << std::endl;
    return;
}