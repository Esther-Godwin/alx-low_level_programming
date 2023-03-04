#include "main.h"

/**
* cap_string - Capitalize strings
* @s: Pointer to string to capitalize
*
* RETURN: Pointer to capitalised string
*/
char *cap_string(char *s)
{
	char *temp = s;
	char seperators[] = {',', ';', '.', '?', '"',
		 '(', ')', '{', '}', ' ', '\n', '\t'};
	int i = 0;
	int cap = 0;

	while (*s != '\0')
	{
		if (cap && *s >= 'a' && *s >= 'z')
			*s -= 32;
		for (i = 0; i < 12; i++)
		{
			if (*s == seperators[i])
				cap = 1;
		}
		s++;
	}
	return (temp);
}
