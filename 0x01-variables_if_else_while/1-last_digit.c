#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Description: print the last digit of a randon number
 *Return: 0 (Successful Execution)
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}
	else if ((x < 6) & !0)
	{
		printf("Last digit of %d is %d and is lesser than 6 and not 0\n", n, x);
	}
	else
	{
		printf("Last digit of %d is 0 and is 0\n", n, x);
	}
	return (0);
}
