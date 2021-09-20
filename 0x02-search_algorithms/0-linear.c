#include "search_algos.h"

/**
 * linear_search - function of linear search
 * @array: int*
 * @size: size_t
 * @value: int
 * Return: the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{

	size_t i = 0;

	if (!array)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		return (i);
	}
		return (-1);
}

