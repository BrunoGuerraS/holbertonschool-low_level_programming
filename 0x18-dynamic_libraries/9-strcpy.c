#include "main.h"
/**
 * *_strcpy - unction that copies the string
 * @dest: pointer
 * @src: pointer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int n = 0;

	while (src[n])
	{
		n++;
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
