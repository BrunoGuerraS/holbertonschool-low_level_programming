#include "main.h"
/**
 * print_alphabet_x10 - Write a function that prints 10 times
(* the alphabet, in lowercase,
 */
void print_alphabet_x10(void)
{
	int x =  97;
	int c;

	for (c = 0; c < 10; c++)
	{
		while (x <= 122)
		{
			_putchar(x);
			x++;
		}
		x = 97;
		_putchar(10);
	}
}
