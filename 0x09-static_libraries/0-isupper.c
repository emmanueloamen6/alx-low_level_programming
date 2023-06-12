#include "main.h"
/**
 *  _isupper - checks for uppercase character
 *  @c: characyyer to be print
 *  Return: either 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
