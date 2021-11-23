#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: the text
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int whisky;
	int vodka;
	char *s = text_content;
	int i = 0;

	if (filename == NULL)
		return (-1);

	whisky = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
	if (whisky == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (*s != '\0')
		{
			i++;
			s++;
		}
		vodka = write(whisky, text_content, i);
		if (vodka == -1)
			return (-1);
	}
	return (1);
}
