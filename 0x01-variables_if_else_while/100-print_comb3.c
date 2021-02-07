#include <stdio.h>
/**
 *main - print 00 - 99 with comma
 *
 *Return: 0
*/

int main(void)
{
	int i;
	int j;

	i = 48;

	while (i < 57)
	{
		j = 48;
		while (j < 58)
		{
			if (i >= j)
			{
				j++;
				continue;
			}
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
				break;
			j++;
				putchar(',');
				putchar(' ');
		}
	i++;
	}

	putchar('\n');

	return (0);
}
