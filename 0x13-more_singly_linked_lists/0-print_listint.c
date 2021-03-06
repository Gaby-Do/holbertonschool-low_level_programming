#include "lists.h"
/**
 * print_listint - works! - prints all the elements of a listint_t list.
 * @h: pointer to node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0; /*node counter*/

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
