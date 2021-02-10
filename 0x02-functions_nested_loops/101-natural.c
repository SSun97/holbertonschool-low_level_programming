#include <stdio.h>
/**
 * main - print sum of numbers that are multiple of 3 or 5
 *
 *
 * Return: 0
*/
int main(void)
{
	int i;
	int sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			sum = sum + i;
		}
		else
			continue;

	}
	printf("%d\n", sum);

	return (0);
}
