#include <stdio.h>

// main - A C program

int main(void) {

float x[2][3];

//initialising at compile time

x[0][0] = 38;
x[0][1] = 30;
x[0][2] = 6;
x[1][0] = 25;
x[1][1] = 24;
x[1][2] = 10;

	printf("Values of array x:\nRow-1 = %.2f %.2f %.2f\nRow-2 = %.2f %.2f %.2f\n", x[0][0], x[0][1], x[0][2], x[1][0], x[1][1], x[1][2]);

return 0;

}
