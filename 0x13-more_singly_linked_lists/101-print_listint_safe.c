#include "lists.h"
/**
 * print_listint_safe - prints a linked list
 * @head: pointer to head of list
 * Return: number of nodes, exit 98 on fail
 */
size_t print_listint_safe(const listint_t *head)
{
	int i = 0;/*number of nodes*/
	const listint_t *temp;

	temp = head;
	printf("[%p] %d", (void *)head, head->n);
	i++;
	head = head->next;
	while (head != temp)
	{
		printf("[%p] %d", (void *)head, head->n);
		head = head->next;
		i++;
	}
	head = temp;
	return (i);
}
