void triangle(void);

void circle(void);
 
void trapezoid(void);

int main() {
	char shape_select;
	printf("enter a char for a shape\n t - Triangle \n z - Trapezoid \n t - Circle \n");
	scanf("%c", &shape_select);

	switch (shape_select) {
		
		case 't':
			//single quote specifies literal value of char
			triangle();
			break;

		case 'z':
			trapezoid();
			break;

		case 'c':
			circle();
			break;
		
		default:
			printf("you entered something other than the needful \n");
	}

	return 0;
}

void circle(void) {
	printf("pls enter a radius\n");
	float radius;
	scanf("%f", &radius);
	printf("area is: %f \n", radius * radius * 3.14);

}

void trapezoid(void) {
	printf("pls enter a top, bottom, then height\n");
	float top, bottom, height;
	scanf("%f %f %f" , &top, &bottom, &height);
	printf("area is: %f \n", (top + bottom) * 0.5 * height);

}


void triangle(void) {
	printf("pls enter a bottom, then height\n");
	float bottom, height;
	scanf("%f %f", &bottom, &height);
	printf("area is: %f \n", bottom * 0.5 * height);

}