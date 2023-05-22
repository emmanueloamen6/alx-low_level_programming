#include <stdio.h>
/**
 *main - Entry point
 *Description: it will print all the lowercase letters except q and e
 *Return: (0) (successful execution)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);	/* return the value of 0 after execution */
}
