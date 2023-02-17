#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
* main - Prints a string stating if a random number is positive,
* negative, or zero
*
* Return: 0
*/
int main(void)
{
	int n;
	char num_sign[9];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		strcpy(num_sign, "positive");
	else if (n < 0)
		strcpy(num_sign, "negative");
	else
		strcpy(num_sign, "zero");
	printf("%d is %s\n", n, num_sign);
	return (0);
}
