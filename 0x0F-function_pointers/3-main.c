#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check if a number is equal to 98
 * @argc: the integer to check
 * @argv: type pointer
 * Return: 0 if false, something else otherwise.
 */
int main(int argc, char *argv[])
{
	int (*ptr)(int, int);

	ptr = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*' &&
		*argv[2] != '/' && *argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' && atoi(argv[3]) == 0) ||
		 (*argv[2] == '%' && atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", ptr(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
