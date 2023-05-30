#include "main.h"
#include<string.h>
/**
 * print_rev-
 * Return:
 */
void print_rev(char *s)
{
	int l = strlen(s);
	int n;

	for (n = l-1; n >= 0; n++)
	{
		_putchar(s[n]);
		n++;
	}
	_putchar('\n');
}
