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

	for (i = 0; i < size; i++)
	{
		if (value != array[i])
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			break;
		}
	};
	return ((int)i);
}
