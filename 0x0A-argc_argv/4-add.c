#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isnumber - Validate number
 * @s: String
 * Return: 1 is number else 0
 */
int isnumber(char *s)
{
	while (*s)
	{
		if (!isdigit(*s))
		{
			return (0);
		}
		s++;
	}
	return (1);
}

/**
 * main - Main function
 * @argc: number of arguments
 * @argv: Array of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int sum = 0;
	*argv[0] = 0;

	while (argc--)
	{
		if (!isnumber(*argv))
		{
			printf("Error\n");
			exit(EXIT_FAILURE);
		}
		sum += atoi(*argv++);
	}

	printf("%d\n", sum);

	exit(EXIT_SUCCESS);
}
