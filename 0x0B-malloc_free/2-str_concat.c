#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int x = 0;
	int i = 0;
	int acum = 0;
	char *ma;

	while (s1[x] != '\0')
	{
		acum += 1;
		x++;
	}
	x = 0;
	while (s2[x] != '\0')
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
	while (s1[x] != '\0')
	{
		ma[x] = s1[x];
		x++;
	}
	while (s2[i] != '\0')
	{
		ma[x] = s2[i];
		x++;
		i++;
	}
	ma[x] = '\0';
	return (ma);
}
