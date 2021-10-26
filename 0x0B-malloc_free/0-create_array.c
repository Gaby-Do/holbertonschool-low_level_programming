#include <stdlib.h>
#include "main.h"
/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char.
 *
 * Description: creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: integer, the size of the array
 * @c: first char in the array
 * Return:pointer to the array, or NULL if fail or if size=0
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
