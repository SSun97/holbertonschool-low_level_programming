#include "search_algos.h"

/**
 * binary_search - function of linear search
 * @array: int*
 * @size: size_t
 * @value: int
 * Return: the first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int *p = array;

	if (!array)
		return (-1);

	while (size)
	{
		printf("Searching in array: ");
		for (i = 0; i < size; i++)
		{
			if ((i + 1) == size)
				printf("%d\n", p[i]);
			else
				printf("%d, ", p[i]);
		}
		i = (size - 1) / 2;
		if (p[i] == value)
			return ((p - array) + i);
		else if (p[i] > value)
		{
			size = i;
		}
		else
		{
			p = p + (i + 1);
			size = size - (i + 1);
		}

	}
	return (-1);
}

