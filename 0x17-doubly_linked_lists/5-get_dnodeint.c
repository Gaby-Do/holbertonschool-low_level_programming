#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list.
 * @head: pointer to start of list
 * @index: index of the node, starting from 0
 * Return: value of node or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *travel = NULL;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	travel = head;
	while (travel && i < index)
	{
		i++;
		travel = travel->next;
		if (!travel)
			return (NULL);
	}
	return (travel);
}
