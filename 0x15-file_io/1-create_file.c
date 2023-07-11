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
 * create_file - create a file
 * @filename: the name of the file to create
 * @text_content: the data to write to filename
 *
 * Return: Upon success, return 1. Otherwise, return -1.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t w = 0;
	int file;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file < 0)
		return (-1);
	if (text_content == NULL)
		w = write(file, text_content, _strlen(text_content));
	close(file);
	if (w < 0)
		return (-1);
	return (1);
}
