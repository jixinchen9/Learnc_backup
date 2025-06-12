// TYC_chap2.4.cpp : Defines the entry point for the application.
//

#include "TYC_chap2.4.h"
#include <stdio.h>
using namespace std;

void multiple_of_x(int x, int a, int b);

int main()
{
	printf("suck my dick im writing vanilla c");
	
	multiple_of_x(2, 17, 100);

	return 0;
}

void multiple_of_x(int x, int a, int b) {
	int i;
	for (i = a; i <= b; i++) {
		if (i % x == 0) printf("\nDivisable by %d: %d", x, i);
	}
}