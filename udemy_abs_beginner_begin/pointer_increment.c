#include <stdio.h>
//#include "math.h"

/*out here is a global space
you can put function prototypes here, though header file is good place for those, more organized
you can declare and define global variables
uninitialized global variables get initialized to 0*/

int main() {

	unsigned long long int some_value = 0x0FF9EE07AC178E98;

	char* address_00 = (char*)&some_value;

	printf("value stored at address %p is %x \n", address_00, *address_00);

	address_00 = address_00 + 5;

	printf("value stored at address %p is %x \n", address_00, *address_00);

	return 0;
}