#include "main.h"
/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: pointer
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	_putchar(10);
	_puts_recursion(s + 1);

}
