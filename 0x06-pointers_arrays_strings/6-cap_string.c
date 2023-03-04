#include "main.h"

/**
* cap_string - Capitalize strings
* @s: Pointer to string to capitalize
*
* Return: The pointer to the capitalised string
*/
char *cap_string(char *s)
{
	char *temp = s;
	char seperators[] = {',', ';', '.', '?', '"',
		 '(', ')', '{', '}', ' ', '\n', '\t'};
	int i = 0;
	int cap = 1;

	while (*temp != '\0')
	{
		if (cap && *temp >= 'a' && *temp <= 'z')
			*temp -= 32;
		cap = 0;
		for (i = 0; i < 12; i++)
		{
			if (*temp == seperators[i])
				cap = 1;
		}
		temp++;
	}
	return (s);
}
