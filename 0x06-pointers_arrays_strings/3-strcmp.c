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
	int sum1 = 0;
	int sum2 = 0;

	while (*s1 != '\0')
	{
		sum1 += *s1;
		s1++;
	}
	while (*s2 != '\0')
	{
		sum2 += *s2;
	}
	return (sum1 - sum2);
}
