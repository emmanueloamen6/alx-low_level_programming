#include "main.h"

/**
 * _strlen - compute the length of a NULL-terminated string
 * @str: the string to measure
 *
 * Return: the length of str, or -1 if str is NULL
 */
ssize_t _strlen(const char *str)
{
	ssize_t len = 0;

	if (!str)
		return (-1);
	while (*str++)
		++len;

	return (len);
}

/**
 * append_text_to_file - create a file
 * @filename: the name of the file to create
 * @text_content: the data to write to filename
 *
 * Return: Upon success, return 1. Otherwise, return -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int w = 0;
	int file;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
		w = write(file, text_content, _strlen(text_content));
	close(file);
	if (w == -1 || file == -1)
		return (-1);
	return (1);
}
