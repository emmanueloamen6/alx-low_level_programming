#include "main.h"
/**
 * create_file - creates a file.
 * @filename: name of the file to be created
 * @text_content: content of text to be written in it
 * Return: -1 if filename is NULL
 *  or on failure
 * 1 on success,
 */
int create_file(const char *filename, char *text_content)
{
	int i, file;

	if (filename == NULL)
		return (-1);
	if (text_content)
		text_content = " ";
	for (i = 0; text_content[i] != '\0'; i++)
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)

		return (-1);
	write(file, text_content, i);
	return (1);
}
