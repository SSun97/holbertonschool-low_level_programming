/**
 * _strlen - check the length of a string
 * @s: type char *
 * Return: length or 0 if NULL is passed.
 */
#include <stdlib.h>
unsigned int _strlen(char *s)
{
	unsigned int i;

	if (s == NULL)
		return (0);

	for (i = 0; *s != '\0'; i++)
		s++;
	return (i);


}
/**
 * string_nconcat - concatnate two strings
 * @s1: type char *
 * @s2: type char *
 * @n: unsigned int
 * Return: char *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len = 0;
	unsigned int i, j;

	if (n >= _strlen(s2))
	{

		len = _strlen(s1) + _strlen(s2) + 1;

		p = malloc(len);
		{
			if (p == NULL)
				return (NULL);
		}

		for (i = 0; i < _strlen(s1); i++)
			*(p + i) = *(s1 + i);
		for (j = 0; j < _strlen(s2); j++)
			*(p + i + j) = *(s2 + j);
		p[i + j] = '\0';
	}
	else
	{
		len = _strlen(s1) + n + 1;

		p = malloc(len);
		{
			if (p == NULL)
				return (NULL);
		}

		for (i = 0; i < _strlen(s1); i++)
			*(p + i) = *(s1 + i);
		for (j = 0; j < n; j++)
			*(p + i + j) = *(s2 + j);
		p[i + j] = '\0';
	}
	return (p);
}
