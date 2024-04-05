#include <stdio.h>

// main - A C program to multiple two floating-point numbers

int main(void) {

float num1, num2, sum;

printf("Enter a float number: ");
scanf("%f", &num1);
printf("Enter another float number: ");
scanf("%f", &num2);

sum = num1 * num2;

printf("%.2f x %.2f = %.2f\n", num1, num2, sum);

return 0;

}
