// chap6_url_finder.cpp : Defines the entry point for the application.
//

#include "chap6_url_finder.h"
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
#include <iostream>
#include <functional>

using std::isspace;
using std::string;
using std::vector;
using std::find_if;

bool not_url_char(char c) {
	//do you never really care whether a boolean looks at original or copy
	static const string url_ch = "~;/?:@=&$-_.+!*'(),";
	return !(isalnum(c) || find(url_ch.begin(), url_ch.end(), c) != url_ch.end());
}

string::const_iterator url_end(string::const_iterator b, string::const_iterator e){
	return find_if(b, e, not_url_char);
}

string::const_iterator url_begin(string::const_iterator b, string::const_iterator e){
	//all on page 158 of the book
	static const string sep_str = "://";
	typedef string::const_iterator iter;

	iter i = b;
	--e;
	//we need to keep track of b bc: 

	const std::default_searcher slash(sep_str.begin(), sep_str.end());
	i = search(i, e, slash);
	//lol
	while ((i = search(i, e, slash)) != e) {
		
		if (i != b && i + sep_str.size() != e) {
			iter beg = i;
			while (beg != b && isalpha(beg[-1]))
 				--beg;
				//you can just use increment decrement to move iterators around
				//in this case you can even use a index to move begin one spot
			
			if (beg != i && !not_url_char(i[sep_str.size()]))
				return beg;
				//check that begin actually moved away from i
				//also use the indexing property of strings to advance i to one iter past ://	
		}
		//resume the search for :// with the while
		//advance the i
		i += sep_str.size();
		
	}
	//std::cout << *i << std::endl;
	return e;
}
string::const_iterator what_is_search(const string& a, const string& b) {
	const std::default_searcher slash(b.begin(), b.end());
	string::const_iterator answer = search(a.begin(), a.end(), slash);
	return answer;
}

vector<string> find_urls(const string& s){
	typedef string::const_iterator iter;
	iter b = s.begin(), e = s.end();
	vector<string> ret;
	while (b != e) {
		b = url_begin(b,e);

		if (b != e) {
			iter after = url_end(b,e);
			ret.push_back(string(b, after));
			b = after;
		}
		
	}
	return ret;
}