#include <stdio.h>
/**
  *main-putchar
  *
  *Return: 0 (success)
  *
  */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'q' && ch != 'e')
	{
		putchar(ch);
	}
	}
	putchar('\n');
	return (0);
}
