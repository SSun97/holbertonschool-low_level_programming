#include <stdio.h>
/**
 * main - print 0-15 base16
 *
 * Return: 0
 *
 *
*/
int main(void)
{
	char c;
	char n;
	int i;

	c = 'a';
	n = '0';

	for (i = 0; i < 10; i++)
	{
	putchar(n);
	n++;
	}

	for (i = 0; i < 6; i++)
	{
	putchar(c);
	c++;
	}

	putchar('\n');

	return (0);

}

