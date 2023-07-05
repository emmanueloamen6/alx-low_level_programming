#include "lists.h"
/**
 * listint_len - number of elements in a linked listint_t list.
 * @h: pointer to the first element
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
