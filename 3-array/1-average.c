#include <stdio.h>

// main - A c program to find the average of n numbers using arrays

int main(void) {

int numbers[3], loop, sum;
float average;

for (loop = 0; loop < 3; loop++) {

	printf("Enter number-%d: ",loop+1);
	scanf("%d", &numbers[loop]);
}

sum = numbers[0] + numbers[1] + numbers[2];

average = sum / 3;

printf("The average of %d, %d and %d = %.2f\n",numbers[0],numbers[1],numbers[2],average);

return 0;

}
