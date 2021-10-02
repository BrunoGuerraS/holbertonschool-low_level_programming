#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generator random number
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	return (0);
}
