#include <stdlib.h>
#include <time.h>
#include <stdio.h>  /* Preprocessor directive */
/**
 * Main - Entry point
 *
 * Description: A program that assign random numbers to variables
 *
 * return: Always (0) (success)
 */
int main(void)
{
	int n;	/* Declaration of variable */

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zer\no", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
