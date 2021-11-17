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
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	aux = *head;
	while (i < (idx - 1))
	{
		if (aux->next == NULL)
			return (NULL);
		aux = aux->next;
		i++;
	}
	new->next = aux->next;
	aux->next = new;
	return (new);
}
