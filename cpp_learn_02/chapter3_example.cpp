#include<iostream>
#include <vector>
#include <algorithm>
using std:: cout;
using std:: cin;
using std::vector;

int main(){
cout << "enter multiple numbers "
"followed by end of file:: ";

//int count =0;
//double sum = 0.0;

double x;
vector<double> vector_of_x;
// store the input in the vector defined
while (cin >> x){
    //++count;
    //sum += x;
    vector_of_x.push_back(x);
}

// typedef: we are saying the name we chose is a synonym for the given type vector<double>>::size_type 
// rather than a variable to hold the value of the type
typedef vector<double>::size_type vector_size;
vector_size x_size = vector_of_x.size();


// sort the inputs based on magnitude
sort(vector_of_x.begin(), vector_of_x.end());
// find the middle index based on size of vector
vector_size middle_index = x_size / 2;

double median;
median = x_size % 2 == 0 ? ((vector_of_x[middle_index] + vector_of_x[middle_index - 1]) / 2) : vector_of_x[middle_index];
// display the median
//cout << "the sum is:: " << vector_of_x << std::endl;
//int test_index;
//test_index = 2;
cout << "well the median is: " << median;
return 0;
}