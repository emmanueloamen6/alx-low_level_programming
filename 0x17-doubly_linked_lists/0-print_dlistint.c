#include "lists.h"
/**
 * print_dlistint - function that prints all the elemts of a doubly linked list
 * @h: poiner to the head of the list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t count = 0;

	while (node)
	{
		count += count;
		printf("%d\n", node->n);
		node = node->next;
	}
	return (count);
}
