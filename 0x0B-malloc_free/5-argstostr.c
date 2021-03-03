#include <stdlib.h>

int _strlen(char *s)
{
	int i;
	for (i = 0; *s != '\0'; i++)
		s++;
	return (i);

}




/*n - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
	int i;
	char *p, *c;

	for (i = 0; i < ac - 1; i++)
		totallen = totallen + 1 + _strlen(av[i])

	p = malloc(totallen);
	c = p;

	for (i = 0; i < ac - 1; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		*(c + j) = av[j];
		*(c + j + 1) = ' ';
		c = c + j + 1;

	}
	*c = '\0';

	return (p);

}
