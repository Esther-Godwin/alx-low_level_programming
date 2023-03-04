#include "main.h"

/**
* string_toupper - Converts lower case strings to upper case
* @s: Pointer to lower case string to convert
*
* Return: Pointer to the uppercase string
*/
char *string_toupper(char *s)
{
	char *temp = s;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (temp);
}
