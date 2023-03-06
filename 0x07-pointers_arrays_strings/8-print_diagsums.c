#include "main.h"
#include <stdio.h>

/**
* print_diagsums - Prints the sum of the two diagonals of array
* @a: Pointer to the array
* @size: size of the square array
*
* Return: void
*/
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * (size + 1)];
		sum2 += a[(i + 1) * (size - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
