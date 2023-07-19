#include "main.h"
/**
  *print_to_ç_ - print n to 98 counts
  *separated by comma, followed
  *by space and number shold be printed in order
  *
  *@n : input
  */
void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count--)
			_putchar("%d, ", count);
	else
		for (count = n; count < 98; count++)
			_putchar("%d ", count);
	_putchar("98\n");
}
