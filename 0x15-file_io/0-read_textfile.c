#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read a text file and print it to stdout
 * @filename: the name of the file to read
 * @letters: the number of letters to be read and printed
 *
 * Return: If filename is NULL, the file cannot be opened or read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	ssize_t b_r;
	ssize_t b_w;
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (!buffer)
		return (0);

	b_r = read(fd, buffer, letters);
	close(fd);

	if (b_r < 0)
	{
		free(buffer);
		return (0);
	}
	if (!b_r)
		b_r = letters;

	b_w = write(STDOUT_FILENO, buffer, b_r);
	free(buffer);

	if (b_w < 0)
		return (0);

	return (b_w);
}
