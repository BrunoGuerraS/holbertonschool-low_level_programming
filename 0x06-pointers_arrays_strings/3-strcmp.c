#include "main.h"
/**
 * _strcmp - unction that compares two strings
 * @s1: pointer
 * @s2: pointer
 * Return: dest
 */
int _strcmp(char *s1, char s2)
{
	int x = 0;
	int s1_acsii, s2_acsii;
	int dif = 0;

	while ((s1[x] != '\0') && (s2[x] != '\0'))
	{
		s1_acsii = s1[x];
		s2_acsii = s2[x];
		if (s1_acsii != s2_acsii)
		{
			dif = s1_acsii - s2_acsii;
			break;
		}
		x++;
	}

	if ((s1[x] == '\0') || (s2[x] == '\0'))
	{
		s1_acsii = s1[x];
		s2_acsii = s2[x];
		dif = s1_acsii - s2_acsii;
		if (dif < 0)
		{
			dif = -1;
		}
		else
		{
			dif = 1;
		}
	}

	return (dif);
}

