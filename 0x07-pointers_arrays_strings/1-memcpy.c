#include "main.h"
/**
 * *_memcpy - 
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
