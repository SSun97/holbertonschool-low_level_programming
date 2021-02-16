#include <stdio.h>
/**
 * print_array - print n number of array elements
 * @a: type pointer
 * @n: type int
 */
void print_array(int *a, int n)
{
	int *p = a;
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(p + i));
		if (i < n-1)
			printf(", ");
	}
	printf("\n");
}
