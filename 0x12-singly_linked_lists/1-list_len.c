#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - prints all the elements of a list_t list.
 * @h: my string
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
