#include "main.h"
/**
 * _strpbrk - print the string when there is a match
 * @s: string
 * @accept: any of the bytes in the string
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; *(accept + x) != 0; x++)
		{
			if (*s == *(accept + x))
				return (s);
		}
		s++;
	}
	return (0);
}
