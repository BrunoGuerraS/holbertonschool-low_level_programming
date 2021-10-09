#include "main.h"
/**
 * print_numbers - unction that prints the numbers, from 0 to 9
 *
 * Return: 0
 */
void print_numbers(void)
{
	char i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
