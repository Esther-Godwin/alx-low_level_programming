#include "main.h"
#include <stdlib.h>

/**
* free_grid - Free memory allocated to a 2 dimensional array
* @grid: The two dimensional array
* @height: The number of rows in the array
*
*/
void free_grid(int **grid, int height)
{
	for (height -= 1; height >= 0; height--)
		free(grid[height]);
	free(grid);
}
