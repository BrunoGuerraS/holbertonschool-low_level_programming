#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: pointer
 * Return: counter
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}

	return (counter);
}
