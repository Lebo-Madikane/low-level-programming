#include <stdio.h>

// main - A c program to take 3 values from the user and store them in an array

int main(void) {

int age[3], count;

for (count = 0; count < 3; count++) {

	printf("Enter age-%d: ", count+1);
	scanf("%d", &age[count]);

}

printf("Age-1 = %d\nAge-2 = %d\nAge-3 = %d\n", age[0], age[1], age[2]);

return 0;

}
