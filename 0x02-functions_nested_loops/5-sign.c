#include "main.h"

/**
* print_sign - Prints the sign of a number
* @n: Number to check
*
* Return: return 1 if number is positive, -1 if it is
* negative, and 0 if it is zero
*/
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('+');
	return (1);
}
