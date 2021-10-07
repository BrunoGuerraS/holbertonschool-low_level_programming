#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @c: can be an integer
 * Return: l
 */
int print_last_digit(int c)
{
	int l = c % 10;

	if (l < 0)
	{
		l = l * -1;
	}

	_putchar('0' + l);
	return (l);
}
