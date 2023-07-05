#include "lists.h"
#include <stdlib.h>
/**
 * *add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @n: integer to the nodes
 * @head: pointer to  the first node list
 * Return: poinert to last node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		*head = last;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
