#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: pointer
 * @accept: pointer
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int p, n_Bts = 0, band = 0;

	do {
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
			{
				n_Bts++;
				band = 1;
				break;
			}
			else
				band = 0;

		}
		if (band == 0)
			break;
	} while (*s++);
	return (n_Bts);
}
