#include "main.h"
#include <stdio.h>
/**
 * _isupper - return if c is a letter in uppercase
 * @c: int
 * Return: c
 */
int _isupper(int c)
{
	int n;

	if (c >= 65 && c <= 90)
	{
		n = 1;
	}
	else
	{
		n = 0;
	}

	return (n);
}
