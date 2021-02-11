#include "holberton.h"
/**
 * print_diagonal - pring n times of "_"
 * @n: type int
 *
*/
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j < i-1; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');

}
