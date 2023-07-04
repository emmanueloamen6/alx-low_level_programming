#include "lists.h"
#include <string.h>
int _strlen_recursion(char *s);
/**
 * *add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the first value on list
 * @str: string to  print
 * Return: a deplicate node added to the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

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
	new->next = *head;
	*head = new;
	return (new);
}
/**
 * _strlen_recursion - print string recursively
 * @s: string to be printed
 * Return: recursive string
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
