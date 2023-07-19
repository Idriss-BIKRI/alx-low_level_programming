#include "main.h"
/**
  *times_table - print 9 tables
  *
  *Return: 0 always
  *
  */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <=0; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			k = i * k;
			if (k <= 9)
				_putchar (' ');
			else
				_putchar((k /10) + 48);
			_putchar((k % 10) + 48);
		}
		_putchar('\n');
	}
}
