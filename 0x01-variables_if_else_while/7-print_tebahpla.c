#include <stdio.h>
/**
 * main - print numbers 0 to 9 in promt
 *
 * Return: 0
 */
int main(void)
{
	int b = 122;

	while (b >= 97)
	{
		putchar(b);
		b--;
	}

	putchar(10);

	return (0);
}
