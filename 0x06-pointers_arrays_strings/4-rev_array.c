#include "main.h"

/**
* reverse_array - Reverse the content of an array of integers
* @a: An array of integers
* @n: The numbers of elements in the array
*
* Return: void
*/
void reverse_array(int *a, int n)
{
	int temp;
	int *end = a + n - 1;

	while (a != end && n > 0)
	{
		temp = *a;
		*a = *end;
		*end = temp;
		if (a + 1 == end)
			break;
		a++;
		end--;
	}
}
