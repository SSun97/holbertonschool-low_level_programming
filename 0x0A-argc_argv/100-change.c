#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the number of arguments
 * @argc: type int
 * @argv: unused
 * Return: type int
*/
int main(int argc, char *argv[])
{
	int r, n;
	int c25, c10, c5, c2, c1;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	r = atoi(argv[1]);
	if (r < 0)
	{
		printf("0\n");
		return (0);
	}
	c25 = r / 25;
	c10 = (r - (25 * c25)) / 10;
	c5 = (r - (25 * c25) - (10 * c10)) / 5;
	c2 = (r - (25 * c25) - (10 * c10) - (5 * c5)) / 2;
	c1 = (r - (25 * c25) - (10 * c10) - (5 * c5)) % 2;
	n = c25 + c10 + c5 + c2 + c1;

	printf("%d\n", n);
	return (0);


}
