#include "main.h"
/**
 * jack_bauer - rints every minute
 * Return: 0
 */
void jack_bauer(void)
{
	char h1 = 48;
	char h2 = 48;
	char m1 = 48;
	char m2 = 48;
	int resth = 58;

	while (h1 < 51)
	{
		if (h1 == 50)
		{
			resth = 52;
		}
		for (h2 = 48; h2 < resth; h2++)
		{
			for (m1 = 48; m1 < 54; m1++)
			{
				for (m2 = 48; m2 < 58; m2++)
				{
					_putchar(h1);
					_putchar(h2);
					_putchar(58);
					_putchar(m1);
					_putchar(m2);
					_putchar(10);
				}
			}
		}
		h1++;
	}
}

