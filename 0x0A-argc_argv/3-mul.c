#include <stdio.h>
#include <stdlib.h>

/**
* main - Multiply two numbers
* @argc: Number of program arguments
* @argv: Array of program arguments pointers
*
* Return: 0 if no error, 1 otherwise
*/
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		puts("Error");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}


