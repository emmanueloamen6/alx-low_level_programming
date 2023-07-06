#include "lists.h"
/**
 * *get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: ponter to the first node
 * @index: index of node
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (current != NULL)
	{
		if (count == index)
		return (current);
	count++;
	current =  current->next;
	}
	return (NULL);
}
