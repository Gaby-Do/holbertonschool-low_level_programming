#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * *_calloc - allocates memory for an array, using malloc.
 *
 * Description: allocates memory for an array, using malloc.
 *
 * @nmemb: unsigned int - elements of the array
 * @size: unsigned int - size of the elements
 * Return: pointer or NULL if fail}
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	memset(p, 0, (nmemb * size));
	return (p);
}
