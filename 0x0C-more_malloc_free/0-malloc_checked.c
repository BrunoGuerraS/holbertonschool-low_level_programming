#include "main.h"
/**
 * malloc_checked - hat allocates memory using malloc
 * @b: unsigned int
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
