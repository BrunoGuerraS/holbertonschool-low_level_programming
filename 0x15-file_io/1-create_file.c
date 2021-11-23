#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: text
 * @text_content: pointer to char
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int whisky;
	char *s = text_content;
	int i = 0;

	if (filename == NULL)
		return (-1);
	while (*s != '\0')
	{
		i++;
		s++;
	}

	whisky = open(filename, O_CREAT | O_RDWR, 0600);
	if (whisky == -1)
		return (-1);

	write(whisky, text_content, i);

	return (0);
}
