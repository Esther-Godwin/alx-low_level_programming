#include "main.h"

/**
* _strncat - Concatenates two strings
* @dest: String to concatenate to
* @src: String to add
* @n: number of bytes to use from the string to add
*
* Return: The concatenated string
*/
char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest;
	int c = 0;
	long total_bytes = sizeof(*src);

	while (*(dest + c) != '\0')
	{
		dest_end++;
		c++;
	}
	while (*src != '\0' && total_bytes <= n)
	{
		*dest_end = *src;
		src++;
		total_bytes += sizeof(*src);
		dest_end++;
	}
	return (dest);
}
