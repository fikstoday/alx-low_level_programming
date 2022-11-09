#include "main.h"
#include <stdlib.h>

/**
 * free_grid - set grid free
 * @grid: double pointer
 * @height: int
 *
 * Description: free malloc assigned for grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
