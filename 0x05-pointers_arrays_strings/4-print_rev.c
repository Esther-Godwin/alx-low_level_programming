#include "main.h"

/**
* print_rev - Prints a string in reverse
* @s: Pointer to the string
*
* Return: void
*/
void print_rev(char *s)
{
	int size = 0;
	char ch;
	char *temp_pointer = s;

	while (*s != '\0')
	{
		size++;
		s++;
	}
	while (size > 0)
	{
		ch = *(temp_pointer + (size - 1));
		_putchar(ch);
		size--;
	}
	_putchar(10);
}
