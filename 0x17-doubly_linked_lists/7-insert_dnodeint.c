#include "lists.h"
/**
 * * insert_dnodeint_at_index - inserts a node at a certain index
  * of doubly linked list
  * @h: double pointer to first node in list
  * @idx: index to add new node at
  * @n: value of new node
  * Return: address to new node or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int x;
	dlistint_t *after, *before, *new_node;

	if (!h)
		return (NULL);
	before = *h;
	after = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		*h = new_node;
		new_node->next = after;
		if (after != NULL)
			after->prev = new_node;
		new_node->prev = NULL;
		return (new_node);
	}
	if (after)
		after = after->next;
	else
		return (NULL);
	for (x = 1; after != NULL && x < idx; x++)
	{
		before = before->next;
		after = after->next;
	}
	if (x == idx)
	{
		before->next = new_node;
		new_node->prev = before;
		new_node->next = after;
		if (after)
			after->prev = new_node;
		return (new_node);
	}
	return (NULL);
}
