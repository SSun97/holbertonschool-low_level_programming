#include <stdio.h>
/**
 * main - print string of a-z
 *
 * Return: 0
 *
 *
*/
int main(void)
{
	char c;
	char C;
	int i;

	c = 'a';
	C = 'A';
	for (i = 0; i < 26; i++)
	{
	putchar(c);
	c++;
	}

	for (i = 0; i < 26; i++)
	{
	putchar(C);
	C++;
	}

	putchar('\n');
	return (0);

}

