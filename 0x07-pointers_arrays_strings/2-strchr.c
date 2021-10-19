#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: pointer
 * @c: char
 * Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if(*s == c)
		{
			break;
		}
		s++;
	}
	if (*s == '\0')
	{
		s = NULL;
	}
	
	return (s);
}
