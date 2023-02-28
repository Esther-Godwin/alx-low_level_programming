#include "main.h"

/**
* swap_int - Swapp two integers
* @a:Pointer to first integer
* @b: Pointer to second integer
*
* Return: void
*/
void swap_int(int *a, int *b)
{
	int value_b = *b;

	*b = *a;
	*a = value_b;
}
