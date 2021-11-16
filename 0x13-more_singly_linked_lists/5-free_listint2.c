#include "lists.h"
/**
 * free_listint2 - frees a listint_t list, sets the head to NULL.
 * @head: pointer to head to list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (temp)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
