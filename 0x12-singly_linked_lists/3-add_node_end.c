#include "lists.h"
int _strlen_recursion(char *s);
/**
 * *add_node_end -
 * Return:
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen_recursion(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (last->next)
			last = last->next;
		last->next = new;
	}
	return (new);
}
/**
 * _strlen_recursion -
 * Return:
 */
int _strlen_recursion(char *s)
{
	if (s == NULL)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
