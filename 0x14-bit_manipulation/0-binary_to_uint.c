/**
 * binary_to_uint - Converts binary to unsigned int
 * @b: Points to a string of 0 and 1 chars
 *
 * Return: Converted number or 0 if b is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;

	for (; b && *b; b++)
	{
		sum = sum * 2;
		if (*b == '0' || *b == '1')
		{
			sum = sum + (*b - '0');
		}
	}
	return (sum);
}
