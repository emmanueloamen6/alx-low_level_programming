#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked -
 * Return:
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	if(ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
	return (0);
}
