#include <stdio.h>

// main - A program to check wether the entered number is positive or nrgative or zero.

int main(void) {

int num;

printf("Enter a number: ");
scanf("%d", &num);

if(num > 0) {
printf("%d is a positive number\n", num);
}
else if(num == 0) {
printf("%d is zero\n", num);
}
else {
printf("%d is a negative number\n",num);
}

return 0;

}
