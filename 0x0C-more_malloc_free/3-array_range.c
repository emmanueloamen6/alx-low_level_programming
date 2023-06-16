#include "main.h"
#include <stdlib.h>
/**
 * *array_range -  creates an array of integers.
 * @min: minimum integers
 * @max: maximum integers
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int size;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
