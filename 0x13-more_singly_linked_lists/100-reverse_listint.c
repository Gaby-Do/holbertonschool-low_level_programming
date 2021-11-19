#include "lists.h"
/**
 * *reverse_listint - reverses a listint_t linked list.
 * @head: pointer to pointer to list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p, *q;

	if (!(*head) || !head)
		return (NULL);
	p = NULL;
	q = (*head)->next;
	while (q)
	{
		(*head)->next = p;
		p = *head;
		*head = q;
		q = (*head)->next;
	}
	(*head)->next = p;
	return (*head);
}
