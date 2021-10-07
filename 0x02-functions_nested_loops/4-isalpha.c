#include "main.h"
/**
 * _isalpha - hecks for alphabetic character
 * @c: return an integer
 * Return: c
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = 1;
	}
	else if (c >= 97 && c <= 122)
	{
		c = 1;
	}
	else
	{
		c = 0;
	}

	return (c);
}
