#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list.
 * @head: pointer to list
 * Return: returns the sum of all the data of a list, 0 if empty.
 */
int sum_listint(listint_t *head)
{
	int x = 0;

	if (!head)
		return (0);
	while (head)
	{
		x = x + head->n;
		head = head->next;
	}
	return (x);
}
