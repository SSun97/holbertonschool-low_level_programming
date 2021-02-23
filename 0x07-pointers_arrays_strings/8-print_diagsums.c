#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two
 *		 diagonals of a square matrix of integers
 * @a: type int*
 * @size: type int
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0, sum2 = 0;
	int *p = a;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 = sum1 + *(p + i * size + j);
			if (i + j == size - 1)
				sum2 = sum2 + *(p + i * size + j);
		}
	}
	printf("%d, %d\n", sum1, sum2);

}
