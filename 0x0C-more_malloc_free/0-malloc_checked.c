#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked -  function that allocates memory using malloc.
 * @b: size of array
 * Return: Always (0)
 */
void *malloc_checked(unsigned int b)
{
	void (*ptr);

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
	return (0);
}
