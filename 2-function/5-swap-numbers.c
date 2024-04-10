#include <stdio.h>

// main - A c program to swap numbers/values

int main(void) {

int num1, num2, swap;

printf("Enter first number: ");
scanf("%d", &num1);
printf("Enter second number: ");
scanf("%d", &num2);

swap = num1;
num1 = num2;
num2 = swap;

printf("\nAfter swapping:\nFirst number = %d\nSecond number = %d\n", num1, num2);

return 0;

}
