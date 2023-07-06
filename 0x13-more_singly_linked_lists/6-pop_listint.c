#include  "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: pointer to the first node
 * Return: deleted number of node
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int x;

	if (*head == NULL)
	{
		return (0);
	}
	new = *head;
	x = (*head)->n;
	*head = (*head)->next;
	free (new);
	return (x);
}
