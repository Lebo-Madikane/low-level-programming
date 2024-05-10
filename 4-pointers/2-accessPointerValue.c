#include <stdio.h>

// main - A c program to access the value a pointer is pointing too.

int main(void) {

int *pointer, age;

printf("Enter your age: ");
scanf("%d", &age);
pointer = &age;

printf("You are %d years old.\n", *pointer);

return 0;

}
