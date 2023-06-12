#include "main.h"
/**
 * _islower - function that checks for lowercase character
 *@c: character to print
 * Return: 0 (false), 1 (true)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	return (0);
}
