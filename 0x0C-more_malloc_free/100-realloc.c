#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - function that reallocates a memory block using malloc and free
 *
 * Description: function that reallocates a memory block using malloc and free
 *
 * @ptr: pointer to original memory block
 * @old_size: int, size of original
 * @new_size: int, size of new memory block
 * Return: pointer to new memory block or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (ptr == NULL)
	{	p = malloc(new_size);
		if (!p)
			return (NULL);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
		return (NULL);
	if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (!p)
		return (NULL);
	memcpy(p, ptr, old_size);
	free(ptr);
	return (p);
}
