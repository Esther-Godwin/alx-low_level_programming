#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - Concatenates two strings
* @s1: String to concatenate to
* @s2: String to join
* @n: Number of bytes to use in s2
*
* Return: Pointer to the concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1, len2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;

	if (n > len2)
		n = len2;
	p = malloc(len1 + n + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1 + n; i++)
	{
		if (*s1)
		{
			p[i] = *s1;
			s1++;
		}
		else
		{
			p[i] = *s2;
			s2++;
		}
	}
	p[i] = '\0';
	return (p);
}
