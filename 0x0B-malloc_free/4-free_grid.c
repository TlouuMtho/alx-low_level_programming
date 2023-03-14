#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a program frees a 2 dimensional grid
 * @grid: grid
 * @height: grid height
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
