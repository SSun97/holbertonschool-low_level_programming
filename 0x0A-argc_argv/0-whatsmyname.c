#include <stdio.h>
/**
 * main - print its name
 * @argc: unused
 * @argv: type char **
 * Return: type int
*/
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);


}
