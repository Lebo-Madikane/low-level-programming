#include <stdio.h>

// main - A special variable/pointer that stores the address of another pointer

int main(void) {

int age, *ptr, **pointer;

age = 30;
ptr = &age;
pointer = &ptr;

printf("I am %d years old.\n", **pointer);

return 0;

}
