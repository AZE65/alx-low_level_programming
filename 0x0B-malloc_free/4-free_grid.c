#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory allocate for the grid
 * created by alloc_grid()
 * @grid: grid to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int num;

	if (grid == NULL || height == 0)
		return;

	for (num = 0; num < height; num++)
		free(grid[num]);

	free(grid);
}
