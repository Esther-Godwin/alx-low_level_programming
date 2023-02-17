#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
* main - Prints the last digit of a random number with some description
*
* Return: 0
*/
int main(void)
{
	int n;
	int last_digit;
	char description[22];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit == 0)
		strcpy(description, "0");
	else if (last_digit > 5)
		strcpy(description, "greater than 5");
	else if (last_digit < 6)
		strcpy(description, "less than 6 and not 0");
	printf("Last digit of %d is %d and is %s\n", n, last_digit, description);
	return (0);
}
