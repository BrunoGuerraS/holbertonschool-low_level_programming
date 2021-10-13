#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer
 */
void print_rev(char *s)
{
	int c = 0;
	int i;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	s--;
	for (i = 0; i < c; i++)
	{
		_putchar(*s);
		s--;
	}
	_putchar(10);

}
