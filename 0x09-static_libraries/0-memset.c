#include "main.h"
/**
 * *_memset - function that fills memory with a constant byte.
 * @s: pointer to memory area
 * @b: character that fill n bytes
 * @n: number of bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
