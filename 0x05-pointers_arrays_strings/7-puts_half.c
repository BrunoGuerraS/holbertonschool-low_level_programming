#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: pointer
 */
void puts_half(char *str)
{
	int count = 0;
	int *ptr1 = str;
	int i = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}

	while (*ptr1 != '\0')
	{
		if (i >= count / 2)
		{
			_putchar(*ptr1);
		}
		ptr1++;
		i++;
	}

	_putchar(10);
}
