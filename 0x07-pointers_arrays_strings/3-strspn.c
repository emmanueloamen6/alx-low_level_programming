#include "main.h"
/**
 * _strspn -  function that gets the length of a prefix substring.
 * @s: pointing to the initial segment string
 * @accept: pointing to the acceptance string
 * Return: c
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int c = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				c++;
				break;
			}
			else if (accept[i + 1] == '\0')
			return (c);
		}
		s++;
	}
	return (c);
}
