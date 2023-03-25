#include <stdio.h>

/**
 * print_name - Prints a name
 * @name: Name to print
 * @f: Function to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
