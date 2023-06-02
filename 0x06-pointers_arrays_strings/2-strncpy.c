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
	int i, j;

	i = 0;
	while (src[i] != '\0' && n > 0)
	{
		i++;
		n--;
	}
	j = 0;
	while (n > 0)
	{
		dest[j] = '\0';
		j++;
		i++;
		n--;
	}
	return (dest);
}
