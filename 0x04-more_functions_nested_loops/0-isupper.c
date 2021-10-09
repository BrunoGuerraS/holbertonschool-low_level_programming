#include "main.h"
#include <stdio.h>
/**
 * int _isupper - return if c is a letter in uppercase
 * @c: int
 * Return: c
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		c = 1;
	}
	else
	{
		c = 0;
	}

	return (c);
}
