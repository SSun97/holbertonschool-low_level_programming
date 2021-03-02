#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: tyoe char *
 * Return: pointer p, otherwith NULL.
 */
char *_strdup(char *str)
{
	int i;
	char *p, *s;
	int len;

	s = str;
	for (len = 0; *s != '\0'; len++)
		s++;
	if (*str == 0)
		return (NULL);

	p = malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		p[i] = str[i];
	return (p);
}
