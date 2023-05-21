#include <stdio.h>
/**
 * main - entry point
 * Description: prints the lowercase alphabet in reverse
 * Return: Always 0 (successful execution)
 */
int main(void)
{
	char alphabet_reverse;

		for (alphabet_reverse = 'z'; alphabet_reverse >= 'a'; alphabet_reverse--)
		{
			putchar(alphabet_reverse);
		}
	{
		putchar('\n');
		return (0);
	}
}

