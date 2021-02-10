#include "holberton.h"
/**
 * print_times_table - Print times table
 * @n: type int
*/

void print_times_table(int n)
{
	int i;
	int j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (i * j < 10)
				{
					if (j > 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(i * j + '0');
				}
				else if (i * j >= 10 && i * j <= 99)
				{
					if (j > 0)
						_putchar(' ');
					_putchar((i * j) / 10 + '0');
					_putchar((i * j) % 10 + '0');
				}
				else
				{
				_putchar((i * j) / 100 + '0');
				_putchar((i * j - 100) / 10 + '0');
				_putchar((i * j) % 10 + '0');
				}
			}
		_putchar('\n');
		}
	}
}
