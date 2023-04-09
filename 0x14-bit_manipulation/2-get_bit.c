/**
 * get-bit - Returns the value of a bit at a given index
 * @n: Number to get the bit value from
 * @index: Index of the bit to get
 *
 * Return: Value of the bit or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits = sizeof(int) * 8, bit = 1;

	if (index >= bits)
		return (-1);
	return ((bit << index & n) ? 1 : 0);
}
