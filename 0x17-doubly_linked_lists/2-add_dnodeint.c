#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: pointer to pointer to start of list
 * @n: value of the new node
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->prev = NULL;
	new->next = *head;
	new->n = n;
	if (!*head)
		new->next = NULL;
	else
		(*head)->prev = new;
	return (*head = new);
}
