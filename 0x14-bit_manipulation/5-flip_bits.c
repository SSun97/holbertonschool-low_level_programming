#include "holberton.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: unsigned int.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, z = 0;
	unsigned long int xor, a = 1;

	if (n == m)
		return (0);

	xor = n ^ m;
	for (i = 0; i < 63; i++)
	{
		if ((xor & (a << i)) > 0)
			z++;
	}
	return (z);
}
