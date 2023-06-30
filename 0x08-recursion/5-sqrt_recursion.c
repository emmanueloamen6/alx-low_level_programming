#include "main.h"
/**
 * _sqrt_recursion - calculate the square root
 * @n: integer to find its square root
 * Return: Square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (helper_sqrt_recursion(n, 0));
}
/**
 * helper_sqrt_recursion - recurses to find the square root
 * @n: interger to find the square root
 * @a: iterator
 * Return: the resulting square root
 */
int helper_sqrt_recursion(int n, int a)
{
	if (a * a > n)
	{
		return (-1);
	}
	if (a * a ==  n)
	{
		return (a);
	}
	return (helper_sqrt_recursion(n, a + 1));
}
