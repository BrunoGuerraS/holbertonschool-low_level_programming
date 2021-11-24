#include "main.h"
/**
 * _fill - handle arguments to copy text
 * @argv: arguments
 * @fd_from: file from
 * @fd_to: file to
 */
void _fill(char **argv, int fd_from, int fd_to)
{
	int MAX_BUFF = 1024;
	char buffer[1024];
	int rd = 1;
	int wr;

	while (1)
	{
		if (rd == 0)
			break;
		rd = read(fd_from, buffer, MAX_BUFF);
		if (rd == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		wr = write(fd_to, buffer, rd);
		if (rd == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
}
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

	fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY,  0666);
	if (fd_to == -1)
		exit(97);
	_fill(argv, fd_from, fd_to);
	return (0);
}
