#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - Creates a two dimensional array
* @width: Number of columns in the array
* @height: Number of rows in the array
*
* Return: The pointer to the 2 dimensional array
*/
int **alloc_grid(int width, int height)
{
	int row, col, f, **p;

	if (width == 0 || height == 0)
		return (NULL);

	p = malloc(height * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		p[row] = malloc(width * sizeof(int));
		if (p[row] == NULL)
		{
			for (f = 0; f < row; f++)
				free(p[f]);
			free(p);
			return (NULL);
		}
		for (col = 0; col < width; col++)
			p[row][col] = 0;
	}
	return (p);
}
