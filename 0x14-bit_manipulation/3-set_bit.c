#include "main.h"
/**
 * set_bit - search in the index
 * @n: unsigned long int
 * @index: the index
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
