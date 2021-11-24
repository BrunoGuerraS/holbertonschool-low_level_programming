#include "main.h"
/**
 * main - copi a file
 * @argc: number of elements
 * @argv: array of elements
 * Return: 0
 */
int main(int argc, char **argv)
{
	int fd_from;
	int fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		exit(97);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC,  0664);
	if (fd_to == -1)
		exit(97);

	_fill(argv, fd_from, fd_to);

	return (0);
}
