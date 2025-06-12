// chap5_strings.cpp : Defines the entry point for the application.
//

#include "chap5_strings.h"
#include "splitter.h"
#include "combiner.h"
#include<iostream>
#include<vector>
#include<string>

using std::cout;
using std::cin;
using std::vector;
using std::string;
using std::endl;
using std::getline;
int main()
{
	//string s;
	//cout << "Hello Jixin: type a sentence please:" << endl;
	//while (getline(cin, s)) {
	//	vector<string> word_container = split(s);
	//	for (vector<string>::size_type i = 0; i != word_container.size(); ++i) {
	//		cout << word_container[i] << endl;
	//}
	string s1,s2;

	cout << "Hello Jixin: type a sentence please:" << endl;
	getline(cin, s1);
	vector<string> word_container_1 = split(s1);

	cout << "Hello Jixin: type another sentence please:" << endl;
	getline(cin, s2);
	vector<string> word_container_2 = split(s2);

	vector<string> hcat_checker = hconcat(word_container_1, word_container_2);
	vector<string> vcat_checker = vconcat(word_container_1, word_container_2);

	cout << "this is what ended up in hcat" << endl;
	for (vector<string>::size_type i = 0; i != hcat_checker.size(); ++i) {
		cout << hcat_checker[i] << endl;
	}
	
	cout << "this is what ended up in vcat" << endl;
	for (vector<string>::size_type i = 0; i != vcat_checker.size(); ++i) {
		cout << vcat_checker[i] << endl;
	}
	return 0;
}
