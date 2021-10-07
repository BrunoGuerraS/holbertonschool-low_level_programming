#include "main.h"
/**
 * int print_last_digit(int) - prints the last digit of a number.
 */
int print_last_digit(int c)
{
	int l;	

	if (c < 0)
	{
		c = c * -1;
	}

	l = c % 10;

	_putchar('0' + l);
	return l;
}
