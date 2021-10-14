#include "main.h"
/**
 * print_array - unction that prints n elements of an array of integers
 * @a: pointer
 * @n: int
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			putchar(44);
			putchar(' ');
		}
	}
	putchar(10);
}
