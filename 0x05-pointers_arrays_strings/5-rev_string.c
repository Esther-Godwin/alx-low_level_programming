#include "main.h"

/**
* string_length - Calculates the length of the string
* @s: Pointer to the string
*
* Return: Length of the string
*/
int string_length(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
		c++;
	return (c);
}

/**
* rev_string - Reverses a string
* @s: String to reverse
*
* Return: void
*/
void rev_string(char *s)
{
	int length;
	int c;
	char *start, *end, temp;

	length = string_length(s);
	start  = s;
	end = s;

	for (c = 0; c < length - 1; c++)
	end++;

	for (c = 0; c < length / 2; c++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
	}
}
