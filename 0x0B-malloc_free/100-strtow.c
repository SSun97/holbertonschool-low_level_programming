#include <stdlib.h>
/**
 * num_of_words - count how many words in a string.
 * @s: type char *
 * Return: type int
 */

int num_of_words(char *s)
{
	int i, n = 0;

	if (*s != ' ')
		n = 1;

	for (i = 0; *s != '\0'; i++)
	{
		if (*s == ' ' && *(s + 1) == ' ')
		{
			s++;
		}
		else if (*s == ' ' && *(s + 1) != ' ' && *(s + 1) != '\0')
		{
			s++;
			n++;
		}
		else
			s++;
	}
	return (n);
}

/**
 * strtow - convert string into words
 * @str: type char *
 * Return: **pointer, null otherwise
 */
char **strtow(char *str)
{
	char **p;
	char *c, *d;
	int i, x, z;

	c = str;
	d = c;

	if (str == NULL || *str == '\0' || (*str == ' ' && *(str + 1) == '\0'))
		return (NULL);

	p = (char **)malloc(num_of_words(str) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < num_of_words(str); i++)
	{
		while (*c == ' ')
			c++;
		d = c;
		for (x = 0; *c != ' ' && *c != '\0'; x++)
			c++;
		p[i] = (char *)malloc(x * sizeof(char) + 1);
		for (z = 0; z < x; z++)
		{
			p[i][z] = *(d + z);
			p[i][z + 1] = '\0';
		}
	}
	p[i] = NULL;
	return (p);
}
