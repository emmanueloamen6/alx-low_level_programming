#include "main.h"
/**
 * reverse_array -
 * Reeturn:
 */
void reverse_array(int *a, int n)
{
	int i, ban;

	i = 0;
	while (i < n--)
	{
		i++;
		ban = a[i];
		a[i] = a[n];
		a[n] = ban;
	}
}

