#include "main.h"
#include <stddef.h>

/**
* _strchr - Locates a character in a string
* @s: Pointer to the ztring
* @c: Character to find
*
* Return: pointer to first occurence of c, NULL if not found
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
