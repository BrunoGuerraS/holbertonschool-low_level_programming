#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: int
 * Return: n
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
