#include<iostream>
//#include <vector>
//#include <algorithm>
#include <string>
#include <map>

using std::cout;
using std::cin;
using std::string;
using std::map;

int main() {
    cout << "enter multiple words "
        "followed by end of file or 'ctrl+c':: ";

    string x;

    map<string, int> word_occurence;
    //{ {"mercy", 0}};

    // store the input in the vector defined
    while (cin >> x) {

        if (x == "eof")
            break;
        //check if newly entered element is already in the occurence map
        if (word_occurence.count(x) == 0) {
            word_occurence.insert(std::pair<string, int>(x,1));
            cout << "not found " << x << "  " << word_occurence[x]<<std::endl;
        }
        else {
            word_occurence[x] += 1;
            cout << "exists " << x << "  " << word_occurence[x]<<std::endl;
        }
    }
    cout <<"size of map:  " << word_occurence.size() << '\n';
    
    //display what kind of things got stored:
    map<string, int>::iterator i;
    for (i = word_occurence.begin(); i != word_occurence.end(); ++i) {
        cout << "element" << std::endl;
        cout << i->first << "\t-->" << i->second << std::endl;
    }
    return 0;
}