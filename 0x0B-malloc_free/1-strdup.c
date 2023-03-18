#include <stdlib.h>
#include "main.h"

/**
* _strdup - Duplicates string
* @str: The string to copy
*
* Return: Pointer to the allocated memory containing the copied string
*/
char *_strdup(char *str)
{
	int i;
	char *p;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;
	p = malloc(i + 1);
	if (p != NULL)
	{
		for (; i >= 0; i--)
			p[i] = str[i];
	}
	return (p);
}
