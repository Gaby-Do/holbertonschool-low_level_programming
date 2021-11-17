#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list
 * @head: pointer to head of list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *uno;
	listint_t *dos;

	if (!(*head))
		return (-1);
	uno = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(uno);
		return (1);
	}
	while (i < (index - 1))
	{
		if (uno->next == NULL)
			return (-1);
		uno = uno->next;
		i++;
	}
	uno = uno->next;
	dos = uno->next;
	uno->next = dos->next;
	free(dos);
	return (1);
}
