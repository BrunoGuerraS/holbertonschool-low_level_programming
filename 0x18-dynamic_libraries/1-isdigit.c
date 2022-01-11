#include "main.h"
/**
 * _isdigit -  Write a function that checks for a digit (0 through 9).
 * @c: int
 * Return: n
 */
int _isdigit(int c)
{
	int n = 0;

	if (c >= 48 && c <= 57)
	{
		n = 1;
	}

	return (n);

}
