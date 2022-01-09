#include "lists.h"
/**
 * dlistint_len - function that returns number of elements in a linked list.
 * @h: pointer to start of list
 * Return:  number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int cant = 0;

	if (!h)
		return (0);
	while (h)
	{
		cant++;
		h = h->next;
	}
	return (cant);
}
