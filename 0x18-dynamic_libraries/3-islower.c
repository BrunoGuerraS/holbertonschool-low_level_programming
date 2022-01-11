#include "main.h"
/**
 * _islower - Checks for lowercase character in each case.
 * @c: it will be a integer
 * Return: c
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}
