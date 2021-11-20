#include "main.h"
/**
 * flip_bits - count the change in 2 numbers
 * @n: size_t
 * @m: size_T
 * Return: count of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int x = n ^ m;

	while (x)
	{
		if ((x & 1) == 1)
			count++;
		x = x >> 1;
	}
	return (count);
}
