#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: pointer
 * @src: pointer
 * @n: unsigned int
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *ptr1 = dest;
	char *ptr2 = src;

	while (i < n)
	{
		*ptr1 = ptr2[i];
		ptr1++;
		i++;
	}

	return (dest);
}
