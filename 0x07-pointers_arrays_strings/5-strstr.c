#include "main.h"
/**
 * _strstr - 
 * Return:
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	while (haystack[j])
	{
		for (i = 0; needle[i] < j; i++)
		{
			if (haystack[j] >= needle[i])
			{
				return (haystack);
			}
			haystack++;
		}
		return ('\0');
	}
	return (0);
}
