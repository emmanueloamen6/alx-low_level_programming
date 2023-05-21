#include <stdio.h>	/* Preprocessing directive */
/**
 * main - Entry point
 * Description - it print the lowercase, and the uppercase of alphabet
 * 
 * return: (0)(sucessful execution)
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
	return (0);
}
