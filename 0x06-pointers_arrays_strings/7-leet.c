#include "main.h"

/**
* leet - Encodes a string
* @s: String to encode
*
* Return: Pointer to encoded string
*/
char *leet(char *s)
{
	char *temp = s;
	char str[] = {'a', 'e', 'o', 't', 'l'};
	int n[] = {4, 3, 0, 7, 1};
	int i = 0;

	while (*temp != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*temp == str[i] || *temp == str[i] - 32)
			{
				*temp = n[i] + '0';
			}
		}
		temp++;
	}
	return (s);
}
