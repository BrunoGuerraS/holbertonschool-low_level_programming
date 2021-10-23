#include "main.h"
/**
 * main - argc & argv
 * @argc: int
 * @argv: pointer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int count;

	for (i = 0; i < argc && argv[i]; i++)
	{
		count = i;
	}
	printf("%d\n", count);
}
