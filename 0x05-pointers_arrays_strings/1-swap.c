#include "main.h"
/**
 * swap_int -  swaps the values of two integers
 * @a: pointer
 * @b: pointer
 * Return: Alwayys 0
 */
void swap_int(int *a, int *b)
{
	int ban = *a;
	*a = *b;
	*b = ban;
}
