#include <stdio.h>

/**
* main - Prints the program name
* @argc: Numer of arguments supplied to the program
* @argv: Array of pointers to the program arguments
*
* Return: 0
*/
int main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
