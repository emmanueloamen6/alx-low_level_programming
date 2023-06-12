#include <stdio.h>
/**
 * main -
 * Return:
 */
int main(int argc, char* argv[])
{
	int a;

	if (argc >= 1)

	{
		for (a = 0; *argv; a++, argv++)
		printf("%d\n", a);
	}
	return (0);
}
