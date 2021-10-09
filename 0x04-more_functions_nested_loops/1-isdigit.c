#include "main.h"
/**
 * _isdigit -  Write a function that checks for a digit (0 through 9).
 * @c: int
 * Return: n
 */
int _isdigit(int c)
{
	int n = 0;

	if (c >= 0 && c <= 9)
	{
		n = 1;
	}

	return (n);

}
