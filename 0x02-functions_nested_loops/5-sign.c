#include "holberton.h"
/**
 * print_sign - Print a sign of a number
 * @n: type int
 *
 * Return: 1 if c is greater than 0, 0 prints 0, -1 if n is less than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
