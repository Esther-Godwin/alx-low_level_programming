#include "main.h"

/**
* _strncpy - Copies string
* @dest: Pointer to the copied string
* @src: Pointer to the string to copy
* @n: Maximum number of bytes to copy
*
* Return: Pointer to the copied string
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;
	int total_bytes = sizeof(*src);

	while (total_bytes <= n)
	{
		if (*src == '\0')
			*temp = '\0';
		else
			*temp = *src;
		src++;
		total_bytes += sizeof(*src);
		temp++;
	}
	return (dest);
}
