#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: pointer
 * @n: pointer
 */
void reverse_array(int *a, int n)
{
	int x = n;
	int i = 0;
	int *ptra = a;
	int tmp;

	while (n > 1)
	{
		a++;
		n--;
	}

	while (i < x / 2)
	{
		tmp = *ptra;
		*ptra = *a;
		*a = tmp;
		a--;
		ptra++;
		i++;
	}
}
