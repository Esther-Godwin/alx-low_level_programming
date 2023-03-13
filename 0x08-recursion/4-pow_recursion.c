#include "main.h"

/**
* _pow_recursion - Calculate x raised to the power of y
* @x: The base number
* @y: The power to raise the base number by
*
* Return: The result of x to the power of y
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
