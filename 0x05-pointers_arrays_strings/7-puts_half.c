#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: pointer
 */
void puts_half(char *str)
{
	int i = 0;
	int n;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		for (n = i / 2; n < i; i++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		for (n = (i + 1) / 2; n < i; i++)
		{
			_putchar(str[n]);
		}
	}

	_putchar(10);
}
