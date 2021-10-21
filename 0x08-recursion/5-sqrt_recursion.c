#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: int
 * number: int
 * Return: n
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	if (n == 0)
	{
		return (0);
	}

	return (root(i, n));
}
/**
 * root - contain base and number
 * @base: int
 * @number: int
 * Return: int
 */
int root(int base, int number)
{
	if (base * base == number)
	{
		return (base);
	}
	if (base * base > number)
	{
		return (-1);
	}

	return (root(base + 1, number));
}
