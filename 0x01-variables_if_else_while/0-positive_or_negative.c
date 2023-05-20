#include <stdlib.h>
#include <time.h>
#include <stdio.h>  /* Preprocessor */
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * Main - This program will assign a random number to the variable
 *
 * return: Always 0
 */
int main(void)    /* Entry point */
{
	int n;

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
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	return (0);
}
