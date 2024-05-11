#include <stdio.h>

// main - A c program to changing the value of a variable through its pointer.

int main(void) {

int *pointer, age;

printf("Enter your age: ");
scanf("%d", &age);

pointer = &age;

printf("You are %d years old.", age);

*pointer += 1;

printf(" Next year you will be %d years old.\n", *pointer);

return 0;

}
