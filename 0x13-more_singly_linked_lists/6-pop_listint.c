#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pinter to head of list
 * Return: returns the head node’s data (n)
 * or if the linked list is empty returns 0
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int x;

	if (!head)
		return (0);
	p = *head;
	x = (*head)->n;
	*head = (*head)->next;
	free(p);
	return (x);
}
