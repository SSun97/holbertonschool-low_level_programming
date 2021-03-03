#include <stdlib.h>
/**
 * _strlen - length of a string
 * @s: type char *
 * Return: int
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
		s++;
	return (i);

}

/**
 * argstostr - check the code for Holberton School students.
 * @ac: type int
 * @av: type char **
 * Return: char * or NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, totallen = 0, z = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		totallen = totallen + 1 + _strlen(av[i]);

	p = malloc(totallen + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			p[z] = av[i][j];
			z++;
		}
		p[z]  = '\n';
		z++;

	}
	p[z] = '\0';

	return (p);

}
