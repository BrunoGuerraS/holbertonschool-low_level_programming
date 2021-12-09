#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: pointer
 * @accept: pointer
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	int x = 0;
	int y = 0;
	int k = 0;
	int z = 0;

	for (x = 0; *(s + x) != 0; x++)
	{
		k = 0;
		for (y = 0;  *(accept + y) != 0; y++)
		{
			if (*(s + x) == *(accept + y))
			{
				z++;
				k = 1;
			}
		}
		if (k == 0)
			return (z);
	}
	return (0);
}
