#include "main.h"
/**
  *print_alphabet_x10 - preint alphabet in 10 lines
  *
  *Retune: always 0.
  *
  */
void print_alphabet_x10(void)
{
	int ln;
	int j;

	for (ln = 1 ; ln <= 10 ; ln++)

	{
		for (j = 97 ; j <= 122 ; j++)
		{
			_putchar(j);
		}

			_putchar('\n');
	}
}
