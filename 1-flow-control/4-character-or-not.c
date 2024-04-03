#include <stdio.h>

// main - A C program to check wether an entered character is a alphabet or not.

int main(void) {

char c;

printf("Enter a character: ");
scanf("%c", &c);

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
	printf("%c is a alphabet\n", c);
}
else {
	printf("%c is not a alphabet\n", c);
}

return 0;

} 
