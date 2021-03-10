/**
 * int_index - get the index number from an array match conditions
 * @array: pointer
 * @size: ubt
 * @cmp: function pointer
 * Return: -1 if no match, otherwise the index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
		return (i);
	}

	return (-1);

}
