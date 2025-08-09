#include <stdio.h>

int main() {
	printf("enter the chars:");
	for (int i = 0; i < 6; i++) {
		char char_receive = getchar();
		printf("the input was ascii no %d \n", char_receive);
		printf("the input was %c \n", char_receive);
	}
	return 0;
}