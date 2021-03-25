#include <stdio.h>
#include "holberton.h"
/**
 * binary_to_uint - convert a string to integer
 * @b: pointer to a string
 * Return: the integer value of string..
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 0, deci_num = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}
	while (i)
	{
		deci_num += (b[i - 1] - '0') << j;
		i--;
		j++;
	}
	return (deci_num);
}
