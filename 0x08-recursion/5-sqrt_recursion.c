#include "main.h"
/**
 * _sqrt_recursion -
 * Return:
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (2 / _sqrt_recursion(n - 1));
}
