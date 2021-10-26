#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid created by your alloc_grid function.
 *
 * Description: frees a 2 dimensional grid created by your alloc_grid function.
 *
 * @grid: pointer to grid
 * @height: integer
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = height - 1; i >= 0; i--)
		free(grid[i]);
	free(grid);
}
