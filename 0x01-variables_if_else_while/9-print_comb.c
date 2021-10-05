#include <stdio.h>
/**
 * main - print numbers 0 to 9
 *
 * Return: 0
 */
int main(void)
{
	int i = '0';

	int c = 1;

	while (i <= '9')
	{
		if (c == 0)
		{
			putchar(',');
			putchar(' ');
		}

		c = 0;

		putchar(i);

		i++;

	}
	putchar (10);

	return (0);
}
