#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings
 * @separator: The string to print between the strings
 * @n: Number of strings passed to the function
 */
void print_strings(char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		printf("%s", s == NULL ? "(nil)" : s);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
