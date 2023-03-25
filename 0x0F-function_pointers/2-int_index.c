/**
 * int_index - Searches for an integer
 * @array: Array to search
 * @size: Size of the array
 * @cmp: Pointer to compare function
 * Return: Index of the first found element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
