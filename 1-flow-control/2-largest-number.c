#include <stdio.h>

// main - a c-program to find the largest number amongst 3-numbers

int main(void) {

int n1, n2, n3;

printf("Enter three different numbers: ");
scanf("%d %d %d", &n1, &n2, &n3);

if (n1 > n2 && n1 > n3)
	printf("%d is the largest number\n", n1);


if (n2 > n1 && n2 > n3)
	printf("%d is the largest number\n", n2);


if (n3 > n1 && n3 > n2)
	printf("%d is the largest number\n", n3);

return 0;

};
