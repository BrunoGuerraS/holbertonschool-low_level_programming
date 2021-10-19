#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: pointer
 * @needle: pointer
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int x, xx, y, bit;

	if (needle == '\0')
		return (haystack);
	for (x = 0; *(haystack + x); x++)
	{
		bit  = 0;
		xx = x;
		for (y = 0; *(needle + y) && (haystack + xx); y++)
		{
			if ((haystack + xx) == *(needle + y))
				bit = 1;
			else
				break;
			xx++;
		}
		if (bit == 1 && *(needle + y) == '\0')
			return (haystack + x);
	}

	return ('\0');
}
