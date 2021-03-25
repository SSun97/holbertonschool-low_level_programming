#include "holberton.h"

/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: unsigned long int
 * @index: unsigned int
 * Return: bit otherwise -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;
	unsigned long int a = 1;

	if (index > 64)
		return (-1);

	(n & (a << index)) ? (bit = 1) : (bit = 0);
	return (bit);
}
