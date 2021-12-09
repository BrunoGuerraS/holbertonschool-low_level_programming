#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to item in matrix
 * @size: size of matrix
 * /
void print_diagsums(int *a, int size)
{
	int x, sum1 = 0, sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += a[(size * x) + x];
		sum2 += a[(size * (x + 1)) - (x + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
