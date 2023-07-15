#include <stdio.h>
/**
  *main - Putchar
  *
  *Return: 0 (success)
  *
  */
int main(void)
{
	int rev = 122;

	while (rev >= 97)
	{
		putchar(rev);
		rev--;
	}
	putchar('\n');
	return (0);
}
