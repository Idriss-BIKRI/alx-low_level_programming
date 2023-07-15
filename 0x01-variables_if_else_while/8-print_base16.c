#include <stdio.h>
/**
  *main - Putchar
  *
  *Return: 0 (success)
  *
  */
int main(void)
{
	int n;
	int a;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);
	}
	for (a = 'a' ; a <= 'f' ; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
