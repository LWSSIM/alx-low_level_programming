#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - return a pointer to a 2 dim int array
 * @width: row
 * @height: column
 * Return: pointer to 2 dim array || NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (0);

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == 0)
		return (0);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == 0)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			return (0);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
