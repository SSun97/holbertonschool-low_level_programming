#include "holberton.h"
/**
 * print_last_digit - print last digit
 * @n: type int
 *
 * Return: n%10 if n>0, otherwise -n%10
*/
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i >= 0)
	{
		_putchar(i + '0');
		return (i);
	}
	else
	{
		i = -i;
		_putchar(i + '0');
		return (i);
	}

}
