#include <stdio.h>

// main - a c program that takes a character from the user and displays it.

int main(void) {

 char c;

 printf("Enter the first letter of your name: ");
 scanf("%c", &c);
 printf("You have entered: %c.\n", c);

 return 0;

}
