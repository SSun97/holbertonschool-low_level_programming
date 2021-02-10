#include <stdio.h>
/**
 * main - print the first 50 fibonacci number
 *
 * Return: 0
*/
int main(void)
{
	long int i, a1 = 1, a2 = 2, c;

	for (i = 0; i < 32; ++i)
	{
		if (a1 > 4000000)
			break;
		else if (a1 % 2 == 0)
		{
			printf("%lu", a1);
			if (i < 31)
			printf(", ");
		}
		c = a1 + a2;
		a1 = a2;
		a2 = c;
	}
	printf("\n");


	return (0);
}
