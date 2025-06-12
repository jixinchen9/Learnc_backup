#include<iostream>

using std::cout;

int main(){
    int product = 1;
    for(int i=1; i!=11; ++i){
        cout << i << std::endl;
        product=product * i;

    }
    cout << product;
    return 0;
}