#include <stdio>
/**
 * Main : entry point
 *
 * Description: a program that print lowercase and uppercase alphabet
 * return 0
 */
int main(void)
{
	char	alphabet_lower, alphabet_upper;	/* Declaration of Variable */

	char	alphabet_lower = 'a', alphabet_upper = 'A';	/* Assignment of Variable */
	while (alphabet_lower <= 'z', alphabet_upper <= 'Z')
	{
		putchar(alphabet_lower);
		putchar(alphabet_upper);
	}
	putchar('\n');
	return (0);
}

