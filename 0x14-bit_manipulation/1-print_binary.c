#include "main.h"

/**
 * print_binary - Print binary representation of a number
 * @n: Number to convert to binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int bits = sizeof(long int) * 8, lead_bit = 1;
	unsigned long int bit = 1;

	for (bit = bit << (bits - 1); bit; bit = bit >> 1)
	{
		if ((n & bit) && lead_bit)
			lead_bit = 0;
		if (!lead_bit)
			_putchar(((n & bit) ? 1 : 0) + '0');
	}
	if (lead_bit)
		_putchar('0');
}
