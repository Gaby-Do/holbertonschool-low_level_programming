#include "lists.h"
/**
 * listint_len - works! - returns the number of elements in a linked list.
 * @h: pointer to first node
 * Return: number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
