#include <stdlib.h>
#include <stdio.h>

/**
* main - Adds positive numbers
* @argc: Number of program arguments
* @argv: Array of pointers to program argument
*
* Return: 0 if no error, 1 otherwise
*/
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				puts("Error");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
