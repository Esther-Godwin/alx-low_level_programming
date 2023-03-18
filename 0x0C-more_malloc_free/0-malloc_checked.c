#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - Allocates memory
* @b: Size of the memory to allocate
*
* Return: Pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
