/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: Points to the number to clear bit from
 * @index: Index of the bit to clear
 *
 * Return: 1 if successful, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits = sizeof(long int) * 8, bit = 1;

	if (index >= bits)
		return (-1);
	bit = bit << index;
	*n = (*n & bit) ? *n - bit : *n;
	return (1);
}
