#include <stdio.h>

// main - A c program to use an array variable as a pointer.

int main(void) 
{

  int ages[3], loop;

  for (loop = 0; loop < 3; loop++) {
	printf("Enter age-%d: ", loop+1);
	scanf("%d", &ages[loop]);
}

  printf("\n*ages = %d\n", *ages);
  printf("*(ages+1) = %d\n", *(ages+1));
  printf("*(ages+2) = %d\n", *(ages+2));  

  return 0;
}
