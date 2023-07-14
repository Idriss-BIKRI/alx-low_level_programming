#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - Operators
  *
  *Return: always 0 (Success)
  *
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%u is positive\n");
	else if (n == 0)
		printf("%u is zero\n");
	if (n < 0)
		printf("%u is negative\n");
	return (0);
}
