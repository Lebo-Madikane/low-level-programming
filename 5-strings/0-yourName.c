#include <stdio.h>

// main - a c program that takes users fullnames and displays them.

int main(void) {

    char name[30];

    printf("Enter your fullname: ");
    fgets(name, sizeof(name), stdin);  // read string

    printf("Fullname: ");
    puts(name);    // display string

    return 0;
}
