#include "main.h"
/**
 * _isalpha - hecks for alphabetic character
 * @c: return an integer
 * Return: c
 */
int _isalpha(int c)
{
	int d = c;

	if (d >= 65 && d <= 90)
	{
		d = 1;
	}
	else if (d >= 97 && d <= 122)
	{
		d = 1;
	}
	else
	{
		d = 0;
	}

	return (d);
}
