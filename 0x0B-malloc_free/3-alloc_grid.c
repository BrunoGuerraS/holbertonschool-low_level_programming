#include "main.h"
/**
 * alloc_grid - eturns a pointer to a 2 dimensional array
 * @width: int
 * @height: int
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **arr, row = height, col = width;

	if (width < 1 || height < 1)
		return ('\0');

	arr = (int **)malloc(sizeof(int *) * row);
	if (arr == 0)
	{
		free(arr);
		return ('\0');
	}
	for (row = 0; row < height; row++)
	{
		*(arr + row) = (int *)malloc(sizeof(int) * col);
		if (*(arr + row) == 0)
		{
			for (row = 0; row < height; row++)
				free(arr[row]);
			free(arr);
			return ('\0');
		}
	}

	for (row = 0; row < height; row++)
	{
		for (col = 0; col < width; col++)
			*(*(arr + row) + col) = 0;
	}

	return (arr);
}
