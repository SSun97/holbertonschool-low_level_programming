#include "holberton.h"
/**
 * print_line - pring n times of "_"
 * @n: type int
 *
*/
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;

	}
	_putchar('\n');


}

