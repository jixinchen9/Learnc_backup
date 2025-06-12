#include "word_tools.h"
#include<iostream>
#include<string>
#include<vector>
#include<list>

using std::istream;
using std::vector;
using std::cout;

istream& word_vector(istream& is) {
	std::string s;
	is >> s;
	std::string::iterator frontletter = s.begin(), backletter = --s.end();
	std::string::size_type i = 0;


	while(i != s.size() / 2){
		cout << "front letter -> " << *frontletter << " back letter -> " << *backletter << std::endl;
		++frontletter;
		--backletter;
		++i;
		if (*frontletter != *backletter) {
			break;
		}
	}
	cout << "i is " << i << std::endl;
	if (i != s.size() / 2) {
		cout << "i is not a palindrome "<< std::endl;
	}
	else {
		cout << "word is a palindrome"<< std::endl;
	}
	return is;
}