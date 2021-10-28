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
	void *p;

	p = malloc(b);
	if (!p)
	{
		exit(98);
	}
	return (p);
}
