#include "holberton.h"

/**
 * set_bit - set the index bit to 1
 * @n: pointer to an unsigned long int
 * @index: unsigned int
 * Return: integer.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1;

	if (index > 64)
		return (-1);

	*n = (*n | (a << index));

	return (*n);




}
