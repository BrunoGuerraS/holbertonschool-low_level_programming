#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: string
 * @letters: counter
 * Return: number of the letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t alert;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = (char *) malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	
	alert = open(filename, O_RDWR);

	if (alert == -1)
		return (0);

	

	read(alert, buffer, letters);

	close(alert);

	write(1, buffer, letters);

	return (0);
}
