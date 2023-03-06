#include "main.h"
#include <stddef.h>

/**
* _strpbrk - Searches a string for any of a set of bytes
* @s: String to search
* @accept: Set of characters to search
*
* Return: pointer to matching character or NULL if not found
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
