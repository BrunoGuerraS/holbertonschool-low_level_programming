#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: double pointer
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int x = 0, y = 0;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
			putchar(a[x][y]);
		putchar(10);
	}
}
