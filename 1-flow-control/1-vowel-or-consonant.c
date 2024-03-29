#include <stdio.h>

// main - A program to check the entered character is a vowel or consonant

int main(void) {

char character, lowerCase, upperCase;

printf("Enter a alphabet: ");
scanf("%c", &character);

lowerCase = (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u');

upperCase = (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U');


if (lowerCase || upperCase) {
	printf("%c is a vowel\n", character);
}
else {
	printf("%c is a consonant\n", character);
}

return 0;

}
