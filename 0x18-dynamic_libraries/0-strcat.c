#include "main.h"
/**
 * *_strcat -  function that concatenates two strings.
 * @dest: pointer
 * @src: pointer
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptro = dest;

	while (*ptro != '\0')
	{
		ptro++;
	}
	while (*src != '\0')
	{
		*ptro = *src;
		ptro++;
		src++;
	}
	*ptro = '\0';

	return (dest);
}
