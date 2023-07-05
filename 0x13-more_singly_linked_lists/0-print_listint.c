#include "lists.h"
/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: pointer to the listint_t
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t no_node = 0;

	while (h)
	{
		no_node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (no_node);
}
