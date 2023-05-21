#include <stdio.h>
/**
 * main - Entry point
 * Description: prints numbers of base 10 starting from 0 using putchar
 * Return: Always 0 (successful execution)
 */
int main(void)
{
	int num;


	for (num = 0; num < 10; num++)
	{
		char charnum = '0' + num;

		putchar(charnum);
	}
	{
		putchar('\n');
		return (0);
	}
}
