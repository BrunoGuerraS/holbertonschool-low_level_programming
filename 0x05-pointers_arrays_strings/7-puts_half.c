#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: pointer
 */
void puts_half(char *str)
{
	int count = 0;
	char *ptr1 = str;
	int i = 0;
	int n;

	while (*str != '\0')
	{
		count++;
		str++;
	}

	if (count % 2 != 0)
	{
		n = (count - 1) / 2;
	}
	else
	{
		n = count / 2;
	}

	while (*ptr1 != '\0')
	{
		if (i >= n)
		{
			_putchar(*ptr1);
		}
		ptr1++;
		i++;
	}

	_putchar(10);
}
