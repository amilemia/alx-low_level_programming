#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Free a 2D grid previsouly created by alloc_grid
 * @grid: 2D grid to free
 * @height: Height of the grid
 *
 * Return: Free grid
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
