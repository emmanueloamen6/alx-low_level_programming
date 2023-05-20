/**
 * Main - program that prints the alphabet in lowercase
 *
 * Return 0
 */
#include <stdio.h>
/* Entry point */
int main(void)
{
	/* Declaration of varibles */
	char alphabet_lower = 'a';
	/* Conditional statement */
	while (alphabet_lower <= 'z')
{
	/* Execution */
	putchar (alphabet_lower);
	/* Increment statement */
	alphabet_lower++;
}
	putchar ('\n');
	return (0);
}
