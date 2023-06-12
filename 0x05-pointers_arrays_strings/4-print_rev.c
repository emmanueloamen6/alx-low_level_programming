#include "main.h"
#include <string.h>
/**
 * print_rev-
 * Return:
 */
void print_rev(char *s)
{
	int lenght = strlen(s);
	int n;

	for (n = lenght; n >0; n--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
