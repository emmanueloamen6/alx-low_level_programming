#include <stdio.h>
/**
 * main - Entry point
 * Description: prints numbers of base 10 starting from 0 using putchar
 * Return: Always 0 (successful execution)
 */
int main(void)
{
	int x;


	for (x = 0; x < 10; x++)
	{
		{
			putchar(x + '0');
		}
	}
	{
		putchar('\n');
		return (0);
	}
}
