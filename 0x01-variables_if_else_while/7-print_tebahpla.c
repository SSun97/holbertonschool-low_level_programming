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
	int i;

	c = 'z';
	for (i = 0; i < 26; i++)
	{
	putchar(c);
	c--;
	}
	putchar('\n');
	return (0);

}

