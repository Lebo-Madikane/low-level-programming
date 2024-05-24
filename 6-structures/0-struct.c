#include <stdio.h>

// main - a c program that takes user info using struct data type

struct person {
 char name[50];
 int age;
} person1;

int main(void) {
 
 printf("Enter your first name: ");
 scanf("%s", person1.name);
 printf("Enter your age: ");
 scanf("%d", &person1.age);

 printf("You are %s, and you are %d years old.\n", person1.name, person1.age);

 return 0;
}
