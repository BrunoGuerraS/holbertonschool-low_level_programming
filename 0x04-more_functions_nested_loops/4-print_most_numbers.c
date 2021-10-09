#include "main.h"
/**
 * print_most_numbers - unction that prints the numbers, from 0 to 9
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	char i = 48;

	while (i < 58)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
		i++;
	}

	return (0);
}
