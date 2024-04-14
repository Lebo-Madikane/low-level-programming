#include <stdio.h>

// main - a c program that calls a user-defined function.
// addNum  - a user-defined function that adds two numbers.

void addNum(void) {

int num1, num2, sum;

printf("Enter a number: ");
scanf("%d", &num1);
printf("Enter a second number: ");
scanf("%d", &num2);

sum = num1 + num2;

printf("%d + %d = %d\n", num1, num2, sum);

}

int main() {

addNum();

return 0;

}
