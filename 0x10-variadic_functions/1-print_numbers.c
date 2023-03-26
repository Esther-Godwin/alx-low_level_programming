#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Print numbers
 * @separator: String to be printed between numbers
 * @n: Number of function parameters
 */
void print_numbers(char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
