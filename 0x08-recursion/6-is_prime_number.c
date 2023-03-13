#include "main.h"

/**
* iterative_check - Iteratively check for prime number
* @n: Number to check
* @i: number to check if it's a factor of n
*
* Return: 1 if n is a prime number, otherwise 0
*/
int iterative_check(int n, int i)
{
	if (n == 2)
		return (1);
	if (n <= 1 || n % 2 == 0)
		return (0);
	if (n % i == 0 && n != i)
		return (0);
	if (i < n)
		return (iterative_check(n, i + 2));
	return (1);
}

/**
* is_prime_number - Check if a number is a prime number
* @n: Number to check
*
* Return: 1 if the number is a prime number, 0 otherwise
*/
int is_prime_number(int n)
{
	return (iterative_check(n, 3));
}
