#include "main.h"
/**
 * _strlen_recursion - handle recursion
 * @s: int
 * Return: n
 */
int _strlen_recursion(char *s)
{
	if (*(s) != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}
/**
 * _palindrome - compare the letters
 * @s: char
 * @x: int
 * @y: int
 * Return: 0
 */
int _palindrome(char *s, int x, int y)
{
	if (*(s + x) == *(s + y))
	{
		if (x == y || (x + 1) == y)
		{
			return (1);
		}
		return (_palindrome(s, (x + 1), (y - 1)));
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - hat returns 1 if a string is a palindrome and 0 if no
 * @s: int
 * Return: int
 */
int is_palindrome(char *s)
{
	int x, y;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		x = 0;
		y = (_strlen_recursion(s) - 1);
		return (_palindrome(s, x, y));
	}
}
