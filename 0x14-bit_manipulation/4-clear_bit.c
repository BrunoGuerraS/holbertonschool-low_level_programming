#include "main.h"
/**
 * clear_bit - change a number about given index
 * @n: uli
 * @index: ui
 * Return: a number
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	index = 1 << index;
	*n = (~index) & *n;
	return (1);
}
