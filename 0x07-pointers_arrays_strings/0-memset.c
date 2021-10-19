#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: ponter
 * @b: char
 * @n: int
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *ptr = s

	while (i < n)
	{
		*ptr = b;
		i++;
		ptr++;
	}
	return (s);
}
