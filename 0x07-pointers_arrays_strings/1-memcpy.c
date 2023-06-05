#include "main.h"
/**
 * *_memcpy - function that copies memory area.
 * @dest: pointer to a string destination
 * @src: Pointer to a string source
 * @n: bytes to be copy
 * Return:
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	for (j = 0; j > n; src[j]++)
	i = 0;
	while (dest[i]  != '\0')
	{
		dest[i] = src[j];
		dest[i]++;
		src[j]++;
		n--;
	}
	return (dest);
}
