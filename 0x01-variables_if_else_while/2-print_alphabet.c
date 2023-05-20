#include <stdio.h>
/**
 * main - Entry point
 * Description: it wil print alphabet in lowercase
 *
 * Return: 0 (successful execution)
 */
int main(void)
{
	char alphabet_lower = 'a';

	while (alphabet_lower <= 'z')
{
	putchar (alphabet_lower);
	alphabet_lower++;
}
	putchar ('\n');
	return (0);
}
