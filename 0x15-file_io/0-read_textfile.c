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
	ssize_t reading;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	alert = open(filename, O_RDONLY);

	if (alert == -1)
		return (0);

	reading = read(alert, buffer, letters);
	if (reading == -1)
		return (0);

	write(STDOUT_FILENO, buffer, reading);
	close(alert);

	free(buffer);

	return (reading);
}
