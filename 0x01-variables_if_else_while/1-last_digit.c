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
	int n, last_digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (last_digit > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("last digit of %d is %d and is lesser than 6 and not 0\n", n, last_digit);
	}
	else
	{
		printf("last digit of %d is %d is 0 and is 0\n", n, last_digit);
	}

	return (0);
}
