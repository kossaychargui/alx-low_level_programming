#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2D grid .
 *
 * @grid: 2D array .
 * @height: height of the array.
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(arr);
}
