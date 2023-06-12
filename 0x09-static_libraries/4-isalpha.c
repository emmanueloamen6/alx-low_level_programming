#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @c: character to be printed
 * Return: either 0 or 1
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
