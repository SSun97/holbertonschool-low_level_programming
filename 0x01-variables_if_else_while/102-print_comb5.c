#include <stdio.h>
/**
 *main - print 00 - 99 with comma
 *
 *Return: 0
*/

int main(void)
{
	int i, j, k, l;

	i = 48;
	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			k = 48;
			while (k < 58)
			{
				l = 48;
				while (l < 58)
				{
					if (i > k || (i == k && j >= l))
					{
						l++;
						continue;
					}
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i == 57 && j == 56 && k == 57 && l == 57)
						break;
					l++;
					putchar(',');
					putchar(' ');
				}
			k++;
			}
		j++;
		}
	i++;
	}

	putchar('\n');

	return (0);
}
