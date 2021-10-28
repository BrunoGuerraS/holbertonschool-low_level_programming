#include "main.h"
/**
 * _strdup - allocated space in memory
 * @str: char
 * Return: pointer
 */
char *_strdup(char *str)
{
	int acum = 0;
	int x = 0;
	char *ma;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[x] != '\0')
	{
		acum += 1;
		x++;
	}

	ma = malloc(sizeof(char) * (acum + 1));

	if (!ma)
	{
		return (NULL);
	}

	x = 0;

	while (str[x] != '\0')
	{
		ma[x] = str[x];
		x++;
	}

	ma[x] = '\0';

	return (ma);

}
