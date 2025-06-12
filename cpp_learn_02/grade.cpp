//grade calculation source
#include "grade.h"
#include "median.h"
#include "Student_info.h"
#include<vector>
#include<stdexcept>

using std::vector;
using std::domain_error;

//compute a overall grade
double grade(double midterm, double final_grade, double homework) {
    return 0.4 * midterm + 0.2 * final_grade + 0.4 * homework;
}

//passes in vector for homework scores as a constant as well as a reference
//reference bc we dont need to copy the vector,but constant bc we do not want to change it
double grade(double midterm, double final_grade, const vector<double>& homework) {
    if (homework.size() == 0) {
        throw domain_error("no homework scores!!");
        //A domain error occurs if an input argument is outside the domain over which the mathematical function is defined
        //in this case size() never throws exceptions
    }
    return grade(midterm, final_grade, median(homework));
}

//defined grading function, in fact it calls the first but is differentiated by its argument 
double grade(const Student_info& s) {
    return grade(s.midterm, s.final, s.homework);
}