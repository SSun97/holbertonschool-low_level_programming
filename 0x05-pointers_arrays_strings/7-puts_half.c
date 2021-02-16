#include "holberton.h"
/**
 * puts_half - print the last half of string
 * @str: type pointer
 *
 */
void puts_half(char *str)
{
	char *p = str;
	int c;
	int i = 0;

	while (*p != '\0')
	{
		p++;
		i++;
	}
	c = i / 2 + 1;

	while (*(str + c) != '\0')
	{
		_putchar(*(str + c));
		c += 1;
	}
	_putchar('\n');

}
