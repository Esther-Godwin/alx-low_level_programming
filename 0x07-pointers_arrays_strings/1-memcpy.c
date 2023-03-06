#include "main.h"

/**
* _memcpy - Copies memory area
* @dest: Memory area to place copied bytes
* @src: Memory area to copy
* @n: Number of bytes to copy
*
* Return: Pointer to copied bytes
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *temp = dest;

	for (i = 0; i < n; i++)
		*temp++ = *src++;
	return (dest);
}
