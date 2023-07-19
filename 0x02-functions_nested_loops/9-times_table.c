#include "main.h"
/**
  *times_table - print 9 tables
  *
  *Return:  always
  *
  */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 0; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			k = i * k;

			/*
			 *put space if k is a single number
			 *place the first digit is its two numbers
			 */
			if (k <= 9)
				_putchar (' ');
			else
				_putchar((k / 10) + 48); /*get the first digit*/
			_putchar((k % 10) + 48); /*get the second digit*/
		}
		_putchar('\n');
	}
}
