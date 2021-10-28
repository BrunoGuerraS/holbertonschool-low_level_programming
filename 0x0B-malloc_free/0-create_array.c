#include "main.h"
/**
 * create_array - reates an array of char
 * @size: int
 * @c: char
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}

	a = (char *)malloc(sizeof(char) * size);

	if (a == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			*(a + i) = c;
		}
	}
	return (a);
}
