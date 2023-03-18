#include "main.h"
#include <stdlib.h>

/**
* array_range - Creates an array of integers
* @min: Minimum integer in the array
* @max: Maximum integer in the array
*
* Return: Pointer to the created array
*/
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (i = 0; min + i <= max; i++)
		p[i] = min + i;
	return (p);
}
