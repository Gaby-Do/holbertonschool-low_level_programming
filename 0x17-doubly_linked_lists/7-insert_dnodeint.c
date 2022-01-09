#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to list
 * @idx: index of node, starts at 0
 * @n: value of new node
 * Return: new node or NULL if fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *travel;
	dlistint_t *new;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	travel = *h;
	while (travel && i < idx)
	{
		i++;
		travel = travel->next;
		if (!travel)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = travel->next;
	new->prev = travel;
	if (travel->next)
		travel->next->prev = new;
	travel->next = new;
	return (new);
}
