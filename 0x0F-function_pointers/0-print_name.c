#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name -  prints a name.
 * @name: pointer to a name
 * @f: pointer to a function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}
	(f)(name);
}
