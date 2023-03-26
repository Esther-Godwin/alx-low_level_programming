#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything
 * @format: Data type of arguments in correct order
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *sep = "";
	char *s;
	int i = 0;

	if (format)
	{
		va_start(args, format);
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);
					printf("%s%s", sep, s == NULL ? "(nil)" : s);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
		va_end(args);
	}
	printf("\n");
}
