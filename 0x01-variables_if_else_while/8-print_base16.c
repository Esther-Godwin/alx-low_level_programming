#include <stdio.h>

/**
* main - Prints all numbers of base 16 in lower case
*
* Return: 0
*/
int main(void)
{
	int num;
	char ch;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
