#include <stdio.h>

/**
* main - Prints the number of arguments of a program
* @argc: Number of arguments supplied to the program
* @argv: Array of pointers to the arguments
*
* Return: 0
*/
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
