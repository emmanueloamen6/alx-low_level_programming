#include <stddef.h>
#include "main.h"
/**
 * _strchr -  function that locates a character in a string.
 * @s: string
 * @c: character to be printed
 * Return: Always (0)
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
