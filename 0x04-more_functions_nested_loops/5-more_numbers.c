#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 * Return: 0
 */
void more_numbers(void)
{
	int a = 0;
	int b;
	char c = 48;
	char d = 48;

	while (a < 10)
	{
		for (b = 0; b < 15; b++)
		{
			_putchar(c);
			if (b >= 9)
			{
				c = 48;
			}
			if (b >= 10)
			{
				_putchar(d);
				d++;
			}
			c++;
		}
		_putchar(10);
		b = 0;
		c = 48;
		d = 48;
		a++;
	}
}
