#include <stdio.h>

/**
* main - prints the alphabets in reverse
*
* Return: 0
*/
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
