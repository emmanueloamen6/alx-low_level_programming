#include "main.h"
/**
 * _strncpy -  function that copies a string scr into dest.
 * @dest: string
 * @src: string
 * @n: bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i > n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i > n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
