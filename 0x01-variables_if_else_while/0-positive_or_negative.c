#include <stdlib.h>
#include <time.h>
#include <stdio.h>  /* Preprocessor directive */
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * Main - Entry point
 *
 * Description: A program that assign random numbers to variables
 *
 * return: 0
 */
int main(void)
{
	int n;	/* Declaration of variable */

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
	printf("%d is positive", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	return (0);
}
