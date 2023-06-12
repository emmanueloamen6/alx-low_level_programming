#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it receives.
 * @argv: argument vector
 * @argc: argument count
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
