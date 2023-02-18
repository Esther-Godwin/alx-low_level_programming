#include <stdio.h>

/**
 * main - Prints a-z, followed by A-Z on another line
 *
 * Return: 0
 */
int main(void)
{
	char small_ch = 'a';
	char capital_ch = 'A';

	while (small_ch <= 'z')
	{
		putchar(small_ch);
		small_ch++;
	}
	while (capital_ch <= 'Z')
	{
		putchar(capital_ch);
		capital_ch++;
	}
	putchar('\n');
	return (0);
}
