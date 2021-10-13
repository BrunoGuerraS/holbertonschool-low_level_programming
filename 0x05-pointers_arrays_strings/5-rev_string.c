#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: pointer
 */
void rev_string(char *s)
{	
	int count = 0;
	int i;

	while(*s != '\0')
	{
		count++;
		s++;
	}

	s--;
	
	for (i = 0; i < count; i++)
	{
		_putchar(*s);
		s--;
	}
	_putchar(10);
}
