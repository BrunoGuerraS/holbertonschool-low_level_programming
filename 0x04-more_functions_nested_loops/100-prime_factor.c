#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0(succes);
 */

int main(void)
{
	int  pf;
	long int number = 612852475143, lf = 0;

	pf = 2;
	while (number >= pf)
	{
		while (number % pf == 0)
		{
			number /= pf;
			if (pf > lf)
			lf = pf;
		}
		pf++;
	}
	printf("%ld\n", lf);
	return (0);
}
