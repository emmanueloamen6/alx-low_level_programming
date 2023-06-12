#include "main.h"
/**
 * is_palindrome - 
 * Return:
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + is_palindrome(s +1));
	}
}
