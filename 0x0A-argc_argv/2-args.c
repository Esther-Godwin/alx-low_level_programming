#include <stdio.h>

/**
* main - Prints all arguments of a program
* @argc: Number of program arguments
* @argv: Array of pointers to program arguments
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
