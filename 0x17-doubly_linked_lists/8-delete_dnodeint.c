#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list.
 * @head: pointer to pointer to list
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *travel;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	travel = *head;
	while (travel && i < index)
	{
		i++;
		travel = travel->next;
		if (!travel)
			return (-1);
	}
	if (travel->prev)
		travel->prev->next = travel->next;
	if (travel->next)
		travel->next->prev = travel->prev;
	if (travel == *head)
		*head = travel->next;
	free(travel);
	return (1);
}
