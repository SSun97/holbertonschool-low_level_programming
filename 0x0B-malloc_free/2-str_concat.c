#include <stdlib.h>
/**
 * _strlen - return the length of a string
 * @s: type char *
 * Return: type int
 */
int _strlen(char *s)
{
	int i;

	if (s == NULL)
	{
		i = 0;
		return (i);
	}
	for (i = 0; *s != '\0'; i++)
		s++;
	return (i);


}
/**
 * str_concat - concatenates two strings
 * @s1: type char *
 * @s2: tyoe char *
 * Return: a pointer point to concatenated strings.NULL for failure.
 */

char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	int i, j;
	char *p;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	p = malloc(len1 + len2 + 1);
	if (p == NULL)
		return (NULL);

	if (s2 == NULL && s1 == NULL)
	{
		p[0] = '\0';
		return (p);
	}
	if (s2 == NULL && s1 != NULL)
	{
		for (i = 0; i <= len1; i++)
			p[i] = s1[i];
		return (p);
	}
	else
	{
		for (i = 0; i < len1; i++)
			p[i] = s1[i];
		for (j = 0; j <= len2; j++)
			p[i + j] = s2[j];
	}
	return (p);
}
