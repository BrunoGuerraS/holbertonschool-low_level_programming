#include "search_algos.h"
/**
 * linear_search - searches for a value in an array
 * @array: list of numbers
 * @size: number of elements
 * @value: value
 * Return: 0 or  -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int j = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[i]);
		if (array[i] == value)
			return (j);

		j++;
	}
	return (-1);
}
