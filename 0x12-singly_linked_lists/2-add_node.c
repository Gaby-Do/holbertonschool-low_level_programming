#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * *add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to first node of the list
 * @str: string inside the node
 * Return: pointer to new node or NULL on fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	while (str[i])
		i++;
	new->len = i;
	new->next = *head;
	*head = new;
	return (*head);
}
