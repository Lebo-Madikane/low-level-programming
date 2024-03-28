#include <stdio.h>

// main - A program to check wether a entered number is even or odd.

int main(void) {

int number;

printf("Enter a number: ");
scanf("%d", &number);

if (number % 2 == 0) {
	printf("%d is a even number\n", number);
} else {
	printf("%d is a odd number\n", number);
};

return 0;

}
