#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: pointer to a string destination
 * @src: Pointer to a string source
 * @n: bytes to be copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		{
		src[j] = dest[j];
		n--;
		}
	return (dest);
}
