#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
//#include "math.h"

/*out here is a global space
you can put function prototypes here, though header file is good place for those, more organized
you can declare and define global variables
uninitialized global variables get initialized to 0*/

int main() {
	printf("enter integer:\n");
	uint8_t number_01;
	scanf("%" SCNu8, &number_01);

	printf("original input: %d\n", number_01);
	printf("set the 4th, set the 7th: %d\n", number_01 | 0b10010000);
	printf("clear the 4th, clear the 7th: %d\n", number_01 & (~0b10010000));
	return 0;
	/*
	* in this code, we did bit setting w OR, in general the bit you want to set are 1 in the mask
	* then we did bit clearing w AND, the bitmask is such that the bits you want to clear are 0 with others being 1
	*/
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

	the &:

	the symbol of many faces, when entered before a variable name like &some_variable, it invokes the address of the variable,it is a pointer, pointer is its own data type
	when entered as part of a variable declaration it defines a reference to another variable, an alias to directly refer to the variable by its address
	finally it is used during fucntion definition and prototype to specify the parameter is passed by reference, that is the function acts on the variable defined by the address, thus the data itself and not a copy

		char test_char_01 = "$";
	printf("int value of char: %d\n", test_char_01);
	printf("address of char: %p\n", &test_char_01);

	printf("size of the pointer is: %d\n", sizeof(&test_char_01));
	long long pointer_as_int = (long long)&test_char_01;
	//i heard c typecasting was bad
	printf("address of char: %x\n", pointer_as_int);

	static:

	BY defining a variable in the global space it persists for the runtime of the app and can be used by any function; 
	what if we dont want it to be used by just any function but we want persistence. global persist but local visibility
	static can be applied to functions and not just variables, using static in the definition of function makes it a private function

	extern:

	using extern just means a variable is being used in one c file that was defined in another, and functions too. extends the visibility

	static void suck_system_cock(int);

		int input_number = 1000;
		suck_system_cock(input_number);

	static void suck_system_cock(int cock_number) {
	printf("system cock is has been sucked %d times.\n", cock_number);
}

	char:
	char can be defined thus: char a1 = 67; or char a1 = 'C' notice use of single quotes

	array:

	an array can be defined thus; i believe it is fixed size

	int number_array[] = {1,4,5,6,7}

	can be declared for size

	functions:

	like variables, functions must be declared before they are used, function prototypes are used to declarea function, they can be prototyped in the global space, or
	as weve seen in the cpp book, included in the global space in the form of a .h file #include "prototype.h"

	in c it is ok to pass parameter in that are raw values (not variables) that match the type of the declaration

	passing by reference in c:
	c does not have built in passing by reference, to get the function to operate on original data and not a copy, a workaround w pointers must be used:

	void passref_demo(int* demo_01) {

	*demo_01=100;

}
in main:
	int main_input_01 = 9;
	passref_demo(&main_input_01);

	printf("now check the result of pass by ref: %d \n", main_input_01);

	function defined to use pointer of input parameter, reference or pointer of variable passed in, to work with variable inside function, it must be de-referenced w '*'
	compare to the cpp way, variable is passed in directly by name, function declaration specifies pass by reference, local variables receive the referenced value can be used directly inside function

	typecasting:

	an implicit typecasting limits the storage size of the cast variable, if you put a VALUE larger than storage size then that will be
	truncated, if you put smaller it will work, but this is almost more insidious

	if you explictly cast an overflowing assignment, it will truncate the data, which may be the program intent



	printf("here is a sum: %d\n", add_numbers(0x0EFA7ED9, 5));
	printf("here is a difference: %d\n", substr_numbers(9, 10));

	printf("here is a dividend: %f\n", dvd_numbers(10, 9));

	return 0;

	floating point numbers:

	for the 2 types of fp numbers a bit is reserved for sign, a number of bits are reserved for exponent, a number of bit reserved for the digits
	this means the fp numbers have a limit both of value and of precision
	float numbers can be readily returned in scientific notation
	
	double number = -1.6021e-19;
	printf(" the number is %0.2f \n", number);
	printf(" the number is %0.2e \n", number);
	return 0;

	__
		float num1, num2, num3, avg0;
	printf("gimme like 3 nos bud\n");
	fflush(stdout);

	// the output buffer holds data to be displayed, fflush forces buffer content to the display or console
	scanf("%f %f %f", &num1, &num2, &num3);

	avg0 = (num1 + num2 + num3) / 3;

	printf("here's the nos:\n %f \n %f \n %f \n avg is: %0.7f", num1, num2, num3, avg0);
	getchar();
	//getchar is gonna pick up the leftover stuff in the input buffer
	//in this case there may be a /n after the number input
	while (getchar() != "\n") {

	}
	getchar();

	getchar() is weird and merits more study
	__

	POINTERS IN C
	int* is a pointer to int or 4 bytes, char* is a pointer to 1 byte and so on, they are all the same size variable, 8 bytes in 64bit
	the type controls the operations of the pointer, read wirte, increment, decrement
	a pointer assignment has to be type cast
	a write is like
	*some_pointer = 0x89
	a read is like
	read_value = *some_pointer
*/