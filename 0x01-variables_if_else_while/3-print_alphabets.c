#include <stdio.h>	/* Preprocessing directive */
/**
 *main - Entry point
 *description: 'print the alphabet in lowercase and uppercase'
 *return: Always (0) (successful)
 */
int main(void)	/* Entry point */
{
	char Alphabet;	/* Declaration of variable */

	for (Alphabet = 'a'; Alphabet <= 'z'; Alphabet++)
	{
		putchar(Alphabet);
	}
	for (Alphabet = 'A'; Alphabet <= 'Z'; Alphabet++)
	{
		putchar(Alphabet);
	}
	putchar('\n');
	return (0);	/* successful execution */
}
