#include <stdio.h>
/**
 * main -  prints the alphabet in lowercase and uppcarse
 *
 * Return: 0
 */
int main(void)
{
	int l = 97;

	int u = 65;

	int y = 10;

	while (l <= 122)
	{
		putchar(l);
		l++;
	}

	while (u <= 90)
	{
		putchar(u);
		u++;
	}

	putchar(y);

	return (0);
}
