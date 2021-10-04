#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int l = 97;
	int s = 10;

	while (l <= 122)
	{
		putchar(l);
		l++;
	}

	putchar(s);

	return (0);
}
