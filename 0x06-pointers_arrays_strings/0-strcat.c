#include "main.h"

/**
* _strcat - Concatenates two strings
* @dest: String to append to
* @src: String to be appended
*
* Return: Concatenated string
*/
char *_strcat(char *dest, char *src)
{
	int size_dest = 0;
	char *dest_end = dest;

	while (*(dest + size_dest) != '\0')
	{
		size_dest++;
		dest_end++;
	}


	while (*src != '\0')
	{
		*dest_end = *src;
		src++;
		dest_end++;
	}
	return (dest);
}
