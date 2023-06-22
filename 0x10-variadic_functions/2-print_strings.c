#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: Separating one string from another
 * @n: number times to print
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		if (string == NULL)
			printf("nil");
		else
			printf("%s", va_arg(string, char*));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
