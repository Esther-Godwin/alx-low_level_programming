#include "main.h"
#include <stdlib.h>

/**
* str_concat - Concatenate two strings
* @s1: String to join to
* @s2: String to join
*
* Return: Pointer to the concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	int i, j, size1, size2;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (size1 = 0; s1[size1]; size1++)
		;
	for (size2 = 0; s2[size2]; size2++)
		;
	p = malloc(size1 + size2 + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		p[i] = s1[i];
	for (j = 0; j < size1 + size2; i++, j++)
		p[i] = s2[j];
	return (p);
}
