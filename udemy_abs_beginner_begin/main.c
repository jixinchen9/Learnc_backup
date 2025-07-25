#include <stdio.h>

/*out here is a global space
you can put function prototypes here, though header file is good place for those, more organized
you can declare and define global variables
uninitialized global variables get initialized to 0*/

int global_try = 17;

int main() {

	char test_char_01 = "$";
	printf("int value of char: %d\n", test_char_01);
	printf("address of char: %p\n", &test_char_01);

	return 0;
}

/*
	hello_world:

	printf("im gay \"@0@.\" \n");
	printf("bc j. \n");

	variable types:
	
	unsigned char distance_ab = 160;
	unsigned char distance_bc = 40;
	printf("distance from a to c is: 0x%x", distance_ab + distance_bc);
	printf(" km");
	return 0;

	sizeof function:
	the sizeof function can find the size of not just variables, but of other data types as well, like arrays, it returns an integer value in a data type size_t
	size_t can be printed as an integer

	printf("size of char is: %d \n", sizeof(char));
	printf("size of int is: %d \n", sizeof(int));
	printf("size of short is: %d \n", sizeof(short));
	printf("size of long is: %d \n", sizeof(long));
	printf("size of long long is: %d \n", sizeof(long long));

	global and local variables:
	brackets delineate scope, whether it be the brackets of main or a function or just brackets within a function,
	outside of brackets variables go away, their reserved memory spot is given to other things

	printf("when u make a function global, global_try is: %d \n", global_try);
	int local_try;
	local_try = local_try + 10;
	printf("check this shit out %d\n", local_try);


*/