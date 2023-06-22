#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -  returns the sum of all its parameters.
 * @n: number of integer
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list na;
	unsigned int i, sum =  0;

	va_start(na, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum + = va_arg(na, const unsigned int);
	}
	{
		va_end(na);
	}
	return (sum);
}
