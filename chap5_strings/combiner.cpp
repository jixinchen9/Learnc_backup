#include "combiner.h"
#include "splitter.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

vector<string> vconcat(vector<string>& a, vector<string>& b) {
	vector<string> ret = a;
	ret.insert(ret.end(), b.begin(), b.end());
	return ret;
}

vector<string> hconcat(vector<string>& a, vector<string>& b) {
	vector<string> ret;
	vector<string>::size_type i = 0, j = 0;
	vector<string>::size_type width1 = width(a) + 1;
	
	while (i != a.size() || j != b.size()) {
		// add the a entry to b entry while leaving a space in between
		string s;
		if (i != a.size()) {
			s = a[i++];
		}
		//while leaving a space in between
		s += string(width1 - s.size(), ' ');

		if (j != b.size()) {
			s += b[j++];
		}
		ret.push_back(s);
	}
	return ret;
}
