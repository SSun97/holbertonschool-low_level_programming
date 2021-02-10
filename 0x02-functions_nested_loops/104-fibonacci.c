#include <stdio.h>
/**
 * main - print the first 50 fibonacci number
 *
 * Return: 0
*/
int main(void)
{
	unsigned long int i, a1 = 1, a2 = 2, c;

	for (i = 0; i < 100; ++i)
	{
		printf("%lu", a1);
		if (i < 99)
			printf(", ");
		c = a1 + a2;
		a1 = a2;
		a2 = c;
	}
	printf("\n");


	return (0);
}
