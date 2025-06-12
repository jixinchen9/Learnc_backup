//source file for median finding

#include "median.h"
#include<algorithm>
#include<stdexcept>
#include<vector>
using std::vector;
using std::domain_error;

double median(vector<double> vec) {
    //set up alias for long specific type of vector size
    typedef vector<double>::size_type vector_size;
    vector_size x_size = vec.size();

    if (x_size == 0) {
        throw domain_error("median cannot be found on empty vector");
    }

    sort(vec.begin(), vec.end());

    vector_size middle_index = x_size / 2;

    return x_size % 2 == 0 ? ((vec[middle_index] + vec[middle_index - 1]) / 2) : vec[middle_index];
}
//define function which will find median of homework vector
//because the argument is vector, the compiler copies the input to a new variable vec
//we use a copy in this case bc we do not want to alter the original in order to find median