#include <stdlib.h>
#include "main.h"
/**
 * **alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 *
 * Description: function that returns a pointer
 * to a 2 dimensional array of integers.
 *
 * @width: ancho
 * @height: alto
 * Return: pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int x = 0;
	int y;
	int a;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		p[a] = malloc(sizeof(int) * width);
		if (p[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(p[a]);
			free(p);
			return (NULL);
		}
	}
	x = 0;
	while (x < height)
	{
		y = 0;
		while (y < width)
		{
			p[x][y] = 0;
			y++;
		}
		x++;
	}
	return (p);
}
