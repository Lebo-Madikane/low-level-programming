#include <stdio.h>

// main - A C program that adds two integers entered by a user.

int main(void) {

int num1, num2, sum;

printf("Enter a number: ");
scanf("%d", &num1);
printf("Enter another number: ");
scanf("%d", &num2);

sum = num1 + num2;

printf("%d + %d = %d\n", num1, num2, sum);

return 0;

}
