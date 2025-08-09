#include <stdio.h>
#include <stdint.h>
//#include "math.h"

/*out here is a global space
you can put function prototypes here, though header file is good place for those, more organized
you can declare and define global variables
uninitialized global variables get initialized to 0*/

void tax_calc(float);

int main() {
	float income;
	printf("what is income: \n");
	scanf("%f", &income);
	if (income < 0) {
		printf("income cant be negative");
		return 0;
	}
	tax_calc(income);

	return 0;
}

void tax_calc(float money) {
	if (money <= 9525) {
		printf("tax: $0");
	}
	else if (money <= 38700) {
		printf("tax: $ %f \n", money * 0.12);
	}
	else if (money <= 82500) {
		printf("tax: $ %f \n", money * 0.22);
	}
	else  {
		printf("tax: $ %f \n", money * 0.32 + 1000);
	}
}