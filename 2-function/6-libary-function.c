#include <stdio.h>
#include <math.h>

// main - A c program to find the square root of a number, using libary function

int main(void) {

float num, root;

printf("Enter a number: ");
scanf("%f", &num);

root = sqrt(num);

printf("\nThe square root of %.2f is %.2f\n", num, root);

return 0;

} 
