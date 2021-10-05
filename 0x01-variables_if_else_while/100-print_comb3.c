#include <stdio.h>
/**
 * main - return a number
 *
 * Return: 0
 */

int main(void)
{
	int a = '0';
	int b = '0';
	int c = 1;

	while (a <= '9')
	{
		while (b <= '9')
		{
			if (a < b)
			{
				if (c == 0)
				{
					putchar(',');
					putchar(' ');
				}

				c = 0;

				putchar(a);
				putchar(b);
			}
			b++;
		}
		b = 0;
		a++;
	}

	putchar (10);

	return (0);
}
