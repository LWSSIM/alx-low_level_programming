#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free grid from alloc-grid
 * @grid: pointer to grid
 * @height: height
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
