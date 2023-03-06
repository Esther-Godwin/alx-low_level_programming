#include "main.h"

/**
* _strspn - Gets the length of a prefix substring
* @s: String to calculate substring fromn
* @accept: Substring to check
*
* Return: Length of matching prefix
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int count = 0;
	unsigned int match = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				match++;
			}
		}
		if (!match)
			return (count);
		match = 0;
		s++;
	}
	return (count);
}
