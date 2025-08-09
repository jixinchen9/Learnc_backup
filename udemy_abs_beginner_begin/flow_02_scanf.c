#include <stdio.h>
#include <stdint.h>
//#include "math.h"

/*out here is a global space
you can put function prototypes here, though header file is good place for those, more organized
you can declare and define global variables
uninitialized global variables get initialized to 0*/

void compare_numbers(int, int);

int main() {
	int number_01, number_02;

	char char_01, char_02;

	printf("enter 2 numbers: \n");
	if (scanf("%d", &number_01));
	//this relies on the return of scanf function, which is integer of successfully scanned parameters, if a char
	//tries to scan into a integer, scanf returns 0
	else {
		scanf("%c", &char_01);
		number_01 = char_01;
		//interesting statement, we store a char value into a in space, implicit casting in a way
	}

	if (scanf("%d", &number_02));

	else {
		scanf("%c", &char_02);
		number_02 = char_02;
	}

	compare_numbers(number_01, number_02);

	return 0;
}

void compare_numbers(int n1, int n2) {
	printf("entered numbers: %d, %d\n", n1, n2);

	if (n1 == n2) {
		printf("these number are equal");
	}
	else {
		if (n1 > n2) {
			printf("larger number is %d \n", n1);
		}
		else {
			printf("larger number is %d \n", n2);
		}
	}

}