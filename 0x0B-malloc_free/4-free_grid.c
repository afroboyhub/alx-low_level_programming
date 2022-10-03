#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: array of alloc_grid
 * @height: height of the array
 *
 *Retrun: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
