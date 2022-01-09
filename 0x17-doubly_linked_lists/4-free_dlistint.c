#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: pointer to list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *prox;

	while (head)
	{
		prox = head->next;
		free(head);
		head = prox;
	}
}
