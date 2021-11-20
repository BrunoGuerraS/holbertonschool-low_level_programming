#include "main.h"
/**
 * get_bit - eturns the value of a bit at a given index
 * @n: size_t
 * @index: size_t
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	if (index == 0)
		return ((n & 1) ? 1 : 0);

	return (get_bit(n >> 1, index - 1));
}

