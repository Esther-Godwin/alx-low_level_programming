#include "main.h"


/**
* _puts_recursion - Print a string using recursion
* @s: Pointer to the string to print
*
* Return: void
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
