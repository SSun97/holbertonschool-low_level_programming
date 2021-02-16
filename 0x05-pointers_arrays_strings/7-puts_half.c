#include "holberton.h"
/**
 * puts_half - print the last half of string
 * @str: type pointer
 *
 */
void puts_half(char *str)
{
	char *p = str;

	while (*(p + 1) != '\0')
		p++;
	while (p >= str)
	{
		_putchar(*(str + (p - str) / 2 + 1));
		str += 2;
	}
	_putchar('\n');

}
