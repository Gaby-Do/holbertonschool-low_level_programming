#include "lists.h"
/**
 * free_listint - works! - frees a listint_t list.
 * @head: pointer to the list to free
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
