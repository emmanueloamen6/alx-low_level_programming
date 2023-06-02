#include "main.h"
/**
 * reverse_array -   reverses the content of an array of integers.
 * @a: pointer to string
 * @n: integer
 * Reeturn:
 */
void reverse_array(int *a, int n)
{
	int i, ban;

	for (i = 0; i < n--; i++)
	{
		ban = a[i];
		a[i] = a[n];
		a[n] = ban;
	}
}

