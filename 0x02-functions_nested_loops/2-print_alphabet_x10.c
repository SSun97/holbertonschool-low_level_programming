#include "holberton.h"
/**
 * print_alphabet - print alphabet
 * @void: no parameter
 *
 * Return: no return
*/

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
