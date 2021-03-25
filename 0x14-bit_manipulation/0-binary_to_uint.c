#include "holberton.h"
/**
 * _pow - calculate the 2 power to the p
 * @n: equals 2
 * @p: the power
 * Return: result.
 */

unsigned int _pow(unsigned int n, unsigned int p)
{
	unsigned int i;

	if (p == 0)
		return (1);
	if (p == 1)
		return (n);

	for (i = 0; i < p - 1; i++)
		n *= 2;

	return (n);
}




/**
 * binary_to_uint - convert a string to integer
 * @b: pointer to a string
 * Return: the integer value of string..
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 0, deci_num = 0;

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}
	while (i)
	{
		deci_num += (b[i - 1] - '0') * _pow(2, j);
		i--;
		j++;
	}
	return (deci_num);
}
