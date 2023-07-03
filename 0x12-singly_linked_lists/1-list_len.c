#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that returns the number of elements in a linked list_t list.
 * @h: pointer  to the head list
 * Return:  the lenght of lists
 */
size_t list_len(const list_t *h)
{
        size_t len = 0;

        while (h)
	{
		len++;
		h = h->next;
        }
        return (len);
}	
