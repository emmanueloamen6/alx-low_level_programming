#include "lists.h"
/**
 * get_dnodeint_at_index - get the node
 * @head: the node
 * @index: the index of the node to print
 * Return: the elements of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c;

	for (c = 0; c < index && head->next; c++)
	{
		head = head->next;
	}
	if (c < index)
		return (NULL);
	return (head);
}
