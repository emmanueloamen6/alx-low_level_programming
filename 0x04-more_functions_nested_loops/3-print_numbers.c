#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 * return : Always 0
 */
void print_numbers(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
		_putchar(d + '0');
	}
	_putchar('\n');
}
