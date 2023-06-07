#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: pointer to the search string
 * @accept: pointer to the  string
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 1; accept[j]; j++)
		{
			if (*s == accept[j])
			{
			return (s);
			}
			s++;
			}
	}
	return ('\0');
	return (0);
}
