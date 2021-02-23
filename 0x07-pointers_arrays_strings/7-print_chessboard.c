#include "holberton.h"
/**
 * print_chessboard - print the chessboard
 * @a: type char*
 * Return: void.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	char *p;

	p = (char *)a;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++, p++)
			_putchar(*p);
		_putchar('\n');

	}

}
