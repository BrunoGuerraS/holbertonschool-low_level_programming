#include "main.h"
/**
 * *_strncat - function that concatenates two strings.
 * @dest: pointer
 * @src: pointer
 * @n: int
 * Return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int i;

	while (*(dest + x))
	{
		x++;
	}

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + x) = *(src + i);
		x++;
	}
	return (dest);
}
