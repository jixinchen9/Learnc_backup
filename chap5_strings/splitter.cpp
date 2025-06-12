#include "splitter.h"
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using std::isspace;
using std::string;
using std::vector;
using std::find_if;

bool space(char c) {
	return isspace(c);
}
	
bool not_space(char c) {
	return !isspace(c);
}

vector<string> split(const string& s) {
	
	typedef string::const_iterator iter;
	iter i = s.begin()

	vector<string> ret;

	while (i != s.end()) {
		i = find_if(i, s.end(), not_space);
		j = find_if(i, s.end(), space);
		
		if (i != s.end()) {
			ret.push_back(string(i, j));
		}

		i = j;
	}
	return ret;
}

vector<string> split_depr(const string& s) {
	//return a vector containing strings with input of a string that does edit
	vector<string> ret;
	typedef string::size_type str_size;
	str_size i = 0;

	//i steps through the entire string, 
	//if it's a space, i counts up
	//if it runs into non-space char it increments a dependent iterator or invariant j
	//it stays in this sub loop until the condition ends, at which point:
	//the string discovered gets stored
	//the 2 invariants get set to same value again
	while (i != s.size()) {
		while (i != s.size() && isspace(s[i])){
			++i;
		}
			
		str_size j = i;
		while (j != s.size() && !isspace(s[j])) {
			++j;
		}
			
		if (i != j) {
			ret.push_back(s.substr(i, j - i));
			i = j;
		}
	}
	return ret;
}

//now I dutifully create a function which finds the max length of a string in a vector
string::size_type width(const vector<string>& v) {
	string::size_type max_length = 0;
	for (vector<string>::size_type i = 0; i != v.size(); ++i) {
		max_length = std::max(max_length, v[i].size());
	}
	return max_length;
}
//now i dutifully write a function which will write a vector with each string entry being bordered
vector<string> frame(const vector<string>& v) {

	//make a first line that is max length of entry +4 all asterisks
	string first_line(width(v) + 4, '*');
	
	//make a empty vector to hold all the new lines
	vector<string> bordered;
	bordered.push_back(first_line);
	
	for (vector<string>::size_type i = 0; i != v.size(); ++i) {
		bordered.push_back("* " + v[i] + string(width(v) - v[i].size(), ' ') + " *");
	}
	bordered.push_back(first_line);

	//make a last line that is the same
	return bordered;
}