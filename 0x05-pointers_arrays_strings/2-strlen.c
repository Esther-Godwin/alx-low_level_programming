#include "main.h"

/**
* _strlen - Get the length of a string
* @s: Pointer to the string
*
* Return: Integer. The length on the string
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
