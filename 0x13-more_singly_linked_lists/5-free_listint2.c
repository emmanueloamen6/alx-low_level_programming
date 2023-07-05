#include "lists.h"

/**
 * free_listint2 - frees a list_t list.
 * @head: pointer to the list.
 **/
void free_listint2(listint_t **head)
{
	listint_t *actual_node;
	listint_t *tmp;

	if (head)
	{
		actual_node = *head;
		tmp = (*head)->next;
		while (tmp)
		{
			free(actual_node);
			actual_node = tmp;
			tmp = tmp->next;
		}
		free(actual_node);
		*head = NULL;
	}
}
