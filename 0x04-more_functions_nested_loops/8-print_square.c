#include "main.h"
/**
 * print_square - print a square
 * @size: size of square
 */
void print_square(int size)
{
	int i, o;

	i = size;
	o = size;

	if (size > 0)
	{
		while (i > 0)
		{
			o = size;
			while (o > 0)
			{
				putchar(35);
				o--;
			}
			putchar(10);
			i--;
		}
	}
	else
	putchar(10);
}
