#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates an array of integers.
 *
 * Description: creates an array of integers.
 *
 * @min: minimo
 * @max: maximo
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int i;
	int h;
	int *p;

	if (min > max)
		return (NULL);
	i = max - min;
	p = malloc(sizeof(int) * (i + 1));
	if (!p)
		return (NULL);
	for (h = 0; h <= max; h++)
	{
		p[h] = min;
		min++;
	}
	return (p);
}
