#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * *add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to first node of the list
 * @str: string inside the node
 * Return: pointer to new node or NULL on fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (!(*head))
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
