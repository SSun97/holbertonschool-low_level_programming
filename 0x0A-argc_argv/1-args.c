#include <stdio.h>
/**
 * main - print the number of arguments
 * @argc: type int
 * @argv: unused
 * Return: type int
*/
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);


}
