#include "lists.h"
/**
 * sum_dlistint - function that returns sum of all data (n) of a linked list.
 * @head: pointer to start of list
 * Return: sum or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux = NULL;
	int sum = 0;

	if (!head)
		return (0);
	aux = head;
	while (aux)
	{
		sum += aux->n;
		aux = aux->next;
	}
	return (sum);
}
