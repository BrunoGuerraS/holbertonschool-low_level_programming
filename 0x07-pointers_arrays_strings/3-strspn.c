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

	while (*(s + x) != 0)
	{
		k = 0;
		while (*(accept + y) != 0)
		{
			if (*(s + x) == *(accept + y))
			{
				z++;
				k = 1;
			}
			y++;
		}
		if (k == 0)
			return (z);
		x++;
	}
	return (0);
}
