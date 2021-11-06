#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - print the result or print 0
 * @argc: int arguments
 * @argv: arguments
 * Return: print
 */
int main(int argc, char **argv)
{
	int result = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0' || get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
