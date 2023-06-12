#include "main.h"
/**
 * *_strcpy
 * Return
 */
char *_strcpy(char *dest, char *src)
{
	*src = 0;
	*dest = 0;
	while (*src != '\0')
	{
		*dest = *src;
		*dest++;
		*src++;
	}
	*dest = '\0';
	return dest;
}
