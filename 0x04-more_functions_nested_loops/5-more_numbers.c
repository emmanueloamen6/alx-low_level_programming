#include "main.h"
/**
 * more_numbers -
 * Return: Nothing
 */
void more_numbers(void)
{
	int j, i;

	for (i = 0; i < 10; i++)
	{	
		for (j = 0; j <= 14; j++)
		{
			if (i < 10)
		}
		{
			_putchar(j + '0');
		}
		else
		{
			_putchar(i);
			_putchar(j % 10 + '0');
		}
	}
	_putchar('\n');
}
