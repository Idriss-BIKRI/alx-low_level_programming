#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - Operators
  *
  *Return: 0 (sucess)
  *
  */
int main(void)
{
	int n;
	int lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n" n, lastd);
	else if (lastd == 0)
		printf("Last digit of %d is %d and is 0\n" n, lastd);
	else if (n < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n" n, lastd);
	return (0);
}
