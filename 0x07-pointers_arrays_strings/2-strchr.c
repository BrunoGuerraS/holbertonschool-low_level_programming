#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: pointer
 * @c: char
 * Return: s
 */
char *_strchr(char *s, char c)
{
	char *ptr = s;

	if (ptr[0] == c)
	{
		return (ptr);
	}
	while (*ptr != '\0')
	{
		ptr++;
		if (*ptr == c)
		{
			return (s);
		}
	}

	return (NULL);
}
