#include <stdio.h>

// main - A c program to find quotient and remainder of two integers

int main(void) {

int num1, num2, divide, remainder;

printf("Enter a number: ");
scanf("%d", &num1);
printf("Enter another number: ");
scanf("%d", &num2);

divide = num1 / num2;
remainder = num1 % num2;

printf("Quotient = %d\n", divide);
printf("Remainder = %d\n", remainder);

return 0;

}
