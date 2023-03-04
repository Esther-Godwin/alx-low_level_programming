#include "main.h"

/**
* _strcmp - Compares two strings
* @s1: First string
* @s2: Second string
*
* Return: Integer depending on how the strings compare
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 - *s2 != 0)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
