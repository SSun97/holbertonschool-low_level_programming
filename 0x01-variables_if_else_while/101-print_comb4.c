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
	int k;

	i = 48;

	while (i < 57)
	{
		j = 48;
		while (j < 58)
		{
			k = 48;
			while (k < 58)
			{

				if (i >= j || j >= k)
				{
					k++;
					continue;
				}
				putchar(i);
				putchar(j);
				putchar(k);

				if (i == 55 && j == 56 && k == 57)
					break;
				k++;
					putchar(',');
					putchar(' ');
			}
		j++;
		}
	i++;
	}

	putchar('\n');

	return (0);
}
