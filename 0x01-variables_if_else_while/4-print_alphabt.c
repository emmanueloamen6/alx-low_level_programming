#include <stdio.h>
/**
 * main - Entry point
 * Description: it will print all the lowercase letters except q and e
 * Return: (0) (successful execution)
 */
int main (void)
{
	char letter_lower, 'e', 'q';

	for (letter_lower = 'a'; letter_lower <= 'z'; letter_lower++)
	{
		if (letter_lower != e && letter_lower != q);
		putchar(letter_lower);
	}
	putchar('\n');
	return (0);	/* return the value of 0 after execution */
}
