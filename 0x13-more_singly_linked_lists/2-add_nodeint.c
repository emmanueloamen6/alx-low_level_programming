#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * *add_nodeint - adds a new node at the beginning of a list_t list.
 * @head: pointer to the first value on list
 * @n: integer of the number string
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
