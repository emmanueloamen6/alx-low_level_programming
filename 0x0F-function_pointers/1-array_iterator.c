#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator -executes a function.
 * @array: pointer  to the arrray
 * @action: action that pint the array
 * @size: number times to print the array
 * Return:  Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
