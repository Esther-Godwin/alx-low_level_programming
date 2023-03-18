#include <stdlib.h>
#include "main.h"

/**
* create_array - Creates an array of chars
* @size: The size of the array to create
* @c: Character to fill the array with
*
* Return: Pointer to the created array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(size);

	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
