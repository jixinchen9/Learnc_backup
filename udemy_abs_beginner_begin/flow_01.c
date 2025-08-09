#include <stdio.h>
#include <stdint.h>
//#include "math.h"

/*out here is a global space
you can put function prototypes here, though header file is good place for those, more organized
you can declare and define global variables
uninitialized global variables get initialized to 0*/

void old_enough(uint8_t);

int main() {
	uint8_t voter_age = 18;

	printf("enter your age: \n");
	scanf("%hhu", &voter_age);

	old_enough(voter_age);

	return 0;
}

void old_enough(uint8_t age) {
	printf("entered age: %d\n", age);
	if (age > 18) {
		printf("voter is old enough to vote");
	}
	else {
		printf("voter is not old enough to vote");
	}
}