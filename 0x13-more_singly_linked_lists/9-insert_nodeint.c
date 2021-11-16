#include "lists.h"
/**
 * *insert_nodeint_at_index -  inserts a new node at a given position
 * @head: pointer to head to list
 * @idx: index of the list where the new node should be added
 * @n: content of new node
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *aux = NULL;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	if (idx == 0)
	{
		new->next = *head;
		new->n = n;
		*head = new;
		return (*head);
	}
	new->n = n;
	aux = *head;
	while (i < (idx - 1))
	{
		if (*head == NULL)
			return (NULL);
		*head = (*head)->next;
		i++;
	}
	new->next = (*head)->next;
	(*head)->next = new;
	*head = aux;
	return ((*head)->next);
}
