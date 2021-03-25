#include "holberton.h"

/**
 * get_endianness - check if the system is little or large endian
 *
 * Return: 1 for little endian, otherwise 0
 */
int get_endianness(void)
{
	int i = 1;

	if ((i >> 1) == 0)
		return (1);
	else
		return (0);
}
