#include "holberton.h"
/**
 * print_rev - reverse print a string
 * @s: type pointer
 *
 */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; *s != 0; i++)
		s++;
	for (j = i; j > 0; j--)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');


}
