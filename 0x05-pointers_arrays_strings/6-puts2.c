#include "holberton.h"
/**
 * puts2 - print every other character of a string, start with the first
 * @str: type pointer
 * Return: Always 0.
 */
void puts2(char *str)
{
	char *p = str;
	int i;

	while (*p != '\0')
		p++;
	for (i = 0; i < (p - str); i += 2)
		_putchar(*(str + i));

	_putchar('\n');

}
