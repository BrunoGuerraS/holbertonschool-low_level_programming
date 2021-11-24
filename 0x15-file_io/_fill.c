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
