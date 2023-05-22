#include <stdio.h>
/**
 * main - Entry point
 * Description: The program prints the size of various variable types
 *Return: 0 Always (success)
 */
int main(void)
{
	int O = sizeof(char);
	int P = sizeof(int);
	int Q = sizeof(long int);
	int R = sizeof(long long int);
	int X = sizeof(float);

	printf("Size of a char: %d byte(s)\n", (int)O);
	printf("Size of an int: %d byte(s)\n", (int)P);
	printf("Size of a long int: %d byte(s)\n", (int)Q);
	printf("Size of a long long int: %d byte(s)\n", (int)R);
	printf("Size of a float: %d byte(s)\n", (int)X);
	return (0);
}
