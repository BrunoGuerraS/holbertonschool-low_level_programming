#include "main.h"
/**
 * print_sign - print the sing
 * @n: sing
 * Return: c
 **/
int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar(43);
		n = 1;
	}
	else if (n <= -1)
	{
		_putchar(45);
		n = -1;
	}
	else
	{
		_putchar(48);
		n = 0;
	}

	return (n);

}
