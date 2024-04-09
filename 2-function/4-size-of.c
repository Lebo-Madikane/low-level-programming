#include <stdio.h>

// main - A c program to find the size of in, float, double and char

int main(void) {

int num1;
float num2;
char c;

printf("Enter a integer: ");
scanf("%d", &num1);
printf("Enter a float: ");
scanf("%f", &num2);

printf("The variable sizes:\n%d = %lu bytes\n%.2f = %lu bytes\n", num1, sizeof(num1), num2, sizeof(num2));

return 0;

}
