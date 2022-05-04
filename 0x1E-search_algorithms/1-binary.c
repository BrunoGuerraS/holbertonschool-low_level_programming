#include "search_algos.h"

/**
 * binary_search - Entry point
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: Always EXIT_SUCCESS
 */

int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = 0, m = 0;

	if (!array)
		return (-1);
	r = size - 1;
	if (array[l] == value)
		return (l);
	if (array[r] == value)
		return (r);
	while (l <= r)
	{
		printa(array, l, r);
		m = floor((l + r) / 2);
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}

/**
 * printa - Entry point
 * @list: pointer to the first element of the array to search in
 * @l: initial value of the array to print
 * @r: final value of the array to print
 */

void printa(int *list, int l, int r)
{
	printf("Searching in array: ");
	for (; l < r; l++)
	{
		printf("%i, ", list[l]);
	}
	printf("%i\n", list[l]);
}
