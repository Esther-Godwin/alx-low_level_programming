#include "main.h"

/**
* iterative_recurse - Get square root
* @n: The number
* @i: Number to check if it's the square root
*
* Return: Square root or -1 if no square root found
*/
int iterative_recurse(int n, int i)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	if (n / i == i && n % i == 0)
		return (i);
	if (i < n)
		return (iterative_recurse(n, i + 1));
	return (-1);
}

/**
* _sqrt_recursion - Calculates the square root of a number
* @n: The number
*
* Return: The natural square root of the given number
*/
int _sqrt_recursion(int n)
{
	return (iterative_recurse(n, 1));
}
