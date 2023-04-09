/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Number to set value of bit in
 * @index: Index of the bit to set
 *
 * Return: 1 if successful, -1 otherwise
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits = sizeof(long int) * 8, bit = 1;

	if (index >= bits)
		return (-1);
	bit = bit << index;
	*n = *n | bit;
	return (1);
}
