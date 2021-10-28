#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * *malloc_checked - function that allocates memory using malloc.
 *
 * Description: function that allocates memory using malloc.
 *
 * @b: unsigned integer
 * Return: pointer to allocated memory or NULL if fail
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(sizeof(unsigned int) * b);
	if (!p)
	{
		exit(98);
	}
	return (p);
}
