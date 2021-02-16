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

	if (i % 2 == 0)
	c = i / 2 + 1;
	else
	c = i / 2;

	while (*(str + c - 1) != '\0')
	{
		_putchar(*(str + c - 1));
		c += 1;
	}
	_putchar('\n');

}
