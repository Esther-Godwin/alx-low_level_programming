#include "main.h"
#include <stdlib.h>

/**
* _calloc - Allocates memory for an array
* @nmemb: Number of elements in the array
* @size: Size of each element
*
* Return: Pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	nmemb *= size;

	while (nmemb--)
	{
		p[nmemb] = 0;
	}
	return ((void *)p);
}
