#include "holberton.h"

/**
 * get_endianness - check if the system is little or large endian
 *
 * Return: 1 for little endian, otherwise 0
 */
int get_endianness(void)
{
	int i = 1;
	char *p = (char *)&i;

	if (*p == 0)
		return (0);
	else
		return (1);
}
