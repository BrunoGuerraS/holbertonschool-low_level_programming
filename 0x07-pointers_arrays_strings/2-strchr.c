#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: pointer
 * @c: char
 * Return: s
 */
char *_strchr(char *s, char c)
{
	if (s[0] == c)
	{
		return (s);
	}
	while (*s != '\0')
	{
		s++;
		if (*s == c)
		{
			return (s);
		}
	}

	return (NULL);
}
