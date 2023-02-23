#include <stdio.h>

/**
* print_to_98 - Print all natural numbers from a given number to 98
* @n: The given number
*
* Reteurn: void
*/
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; n < 98 ? i++ : i--)
	{
		if (i != 98)
			printf("%d, ", i);
		else
			printf("%d", i);
	}
	printf("\n");
}
