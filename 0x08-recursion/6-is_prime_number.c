#include "main.h"
/**
 * prime - loop and piece of the pricipal function
 * @n: int
 * @i: int
 * Return: int
 */
int prime(int n, int i)
{
	if (n != i && n % i)
	{
		return (0);
	}
	if (n == i && n % 1 == 0)
	{
		return (1);
	}
	else
	{
		return (prime(n, i + 1));
	}
}
/**
 * is_prime_number -  that returns 1 if the input integer is a prime number
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime(n, 2));
}
