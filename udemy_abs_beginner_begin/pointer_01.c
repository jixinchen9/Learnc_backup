#include <stdio.h>
//#include "math.h"

/*out here is a global space
you can put function prototypes here, though header file is good place for those, more organized
you can declare and define global variables
uninitialized global variables get initialized to 0*/

int global_try = 17;



int main() {

	unsigned long long int some_value = 0x0FF9EE07AC178E98;

	long long int* address_of_some_value = (long long int*) & some_value;
	printf("data at %p is %llu \n", address_of_some_value, *address_of_some_value);


	char* address_of_some_value_2 = (char*)&some_value;
	printf("data at %p is %d \n", address_of_some_value_2, *address_of_some_value_2);

	short* address_of_some_value_3 = (short*)&some_value;
	printf("data at %p is %d \n", address_of_some_value_3, *address_of_some_value_3);

	int* address_of_some_value_4 = (int*)&some_value;
	printf("data at %p is %d \n", address_of_some_value_4, *address_of_some_value_4);


	return 0;
}
