#include "main.h"
/**
 * print_alphabet_x10 - print the lowercase of alphabet in 10 times
 *
 * return: void
 */
void print_alphabet_x10(void)
{
	char i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
		_putchar(j);
		}
	_putchar('\n');
	}

}
