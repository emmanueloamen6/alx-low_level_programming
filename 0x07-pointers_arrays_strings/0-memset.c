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
	if (n > 0)
	{
		b++;
		n--;
	}
	return (s);
}
