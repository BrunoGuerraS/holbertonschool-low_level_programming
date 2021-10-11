#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: int
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			_putchar(95);
		}
	}
	_putchar(10);

}
