#include "holberton.h"
/**
 * _puts - print a character or string
 * @str: pointer
 *
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != 0; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
