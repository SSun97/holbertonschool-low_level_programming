#include <stdio.h>
/**
 * main - print its name
 * @argc: type int
 * @argv: type char **
 * Return: type int
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);

}
