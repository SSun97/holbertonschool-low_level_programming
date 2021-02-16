#include "holberton.h"
/**
 * puts2 - print every other character of a string, start with the first
 * @str: type pointer
 * Return: Always 0.
 */
void puts2(char *str)
{
	char *p = str;

	while (*p != '\0' || *(p + 1) != '\0')
	{
		_putchar(*p);
		p += 2;
	}

	_putchar('\n');

}
