#include "chap6_url_finder.h"
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
#include <iostream>

using std::isspace;
using std::string;
using std::vector;
using std::find_if;
using std::cout;


int main()
{
	
	cout << "Hello CMake. but just input a string that has a url or two in it" << std::endl;
	
	string test_string = "but not https://www.raspberrypi.com/documentation/pico-sdk/hardware.html#functions-10 hey you is this https://www.pelikan.com/int/products/writing/supplies-accessories/156-inks/125-pelikan-4001-ink-glass-jar.html wi more bovril";
	//std::cin >> test_string;
	//cin is fucking me up, it doesnt take in anything after the whitespace
	vector<string> url_vector;
	url_vector = find_urls(test_string);

	for (vector<string>::const_iterator i = url_vector.begin(); i != url_vector.end(); i++) {
		cout << "lolol" << std::endl;
		cout << *i <<std::endl;
	}
	/*
	cout << "put in string followed by substring" << std::endl;
	string test_string, sub_string;

	test_string = "but not https://www.raspberrypi.com/documentation/pico-sdk/hardware.html#functions-10 hey ";
	sub_string = "-sdk";
	

	string::const_iterator found_it = what_is_search(test_string, sub_string);
	if (found_it != test_string.end()) 
		cout << *found_it << std::endl;
	
	else
		cout << "better luck next time" << std::endl;
	*/
	return 0;
}