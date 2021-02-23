/**
 * _strchr - check if a string contain a char c
 * @s: type char *
 * @c: type char
 * Return: p if it contains, otherwise NULL.
 */
char *_strchr(char *s, char c)
{
	char *p;

	p = s;
	while (*p != c)
	{
		if (*p == '\0')
			break;
		p++;
	}

	return (p);
}
