#include "lists.h"
/**
 * *get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to list
 * @index: index of the node, starting at 0
 * Return: if the node does not exist returns NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (!head)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
