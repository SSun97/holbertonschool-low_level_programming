/**
 * array_iterator - prints an integer
 * @array: pointer of an array
 * @size: size of array
 * @action: pointer of function
 * Return: Nothing.
 */
void array_iterator(int *array, int size, void (*action)(int))
{
	int i = 0;

	for (i = 0; i < size; i++)
		action(array[i]);
}
