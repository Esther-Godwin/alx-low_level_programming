#include "main.h"
#include <stddef.h>

/**
* _strstr - Locates a substring
* @haystack: String to search in
* @needle: Substring to search
*
* Return: Pointer to the located substring or null if not found
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;

	while (*haystack)
	{
		for (i = 0; needle[i] && haystack[i] && needle[i] == haystack[i]; i++)
			;
		if (!needle[i])
			return (haystack);
		haystack++;
	}
	return (NULL);
}
