#include "holberton.h"
/**
 * print_triangle - print triangle
 * @size: type int
 *
*/
void print_triangle(int size)
{
	int i, j, z;

	if (size > 0)
	{
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size - i; j++)
			_putchar(' ');
		for (z = 0; z < i; z++)
			_putchar('#');
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
