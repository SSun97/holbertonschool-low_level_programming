#include "holberton.h"
/**
 * print_binary - print the binary number of an integer
 * @n: unsigned long integer
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i, j = 0, a = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = (a << 63); i > 0; i = (i >> 1))
	{
		if ((n & i) == 0)
		{
			j++;
			continue;
		}
		else
			break;
	}
	for (i = (a << (63 - j)); i > 0; i = (i >> 1))
	(n & i) ? _putchar('1') : _putchar('0');
}
