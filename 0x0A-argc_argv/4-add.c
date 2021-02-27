#include <stdio.h>
/**
 * _atoi - check the code for Holberton School students.
 * @s: type pointer
 * Return: tyoe int.
 */


int _atoi(char *s)
{
	char *p = s;
	unsigned int i = 0;
	unsigned int digit;
	int sign = 1;
	char *c = s;

	if (*c == '\0')
		return (i);


	while (*p < '0' || *p > '9')
	{
		if (*p == '-')
			sign = sign * (-1);

		p += 1;
	}
	for ( ; ; p += 1)
	{
		digit = *p - '0';
		if (digit > 9)
			break;

		i = 10 * i + digit;

	}
	if (sign == -1)
	{
		return (-i);

	}
	return (i);
}
/**
 * isint - check if the string can be convert to an integer
 * @p: type int
 * Return: 0 is not, otherwise is 1
 */



int isint(char *p)
{
	while (*p)
	{
		if (*p >= '0' && *p <= '9')
			p++;
		else
			return (0);
	}
	return (1);

}



/**
 * main - print its name
 * @argc: unused
 * @argv: type char **
 * Return: type int
*/
int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < argc - 1; i++)
	{
		if (isint(argv[i + 1]) == 0)
		{
			printf("Error\n");
			return (0);
		}
		sum +=  _atoi(argv[i + 1]);
	}
	printf("%d\n", sum);
	return (0);


}


















