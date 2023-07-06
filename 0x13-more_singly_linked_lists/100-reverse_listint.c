#include "lists.h"
/**
 * *reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer the first node
 * Return: head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	*head = previous;
	return (*head);
}
