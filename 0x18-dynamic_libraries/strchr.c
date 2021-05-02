/**
 * _strchr - check if a string contain a char c
 * @s: type char *
 * @c: type char
 * Return: p if it contains, otherwise NULL.
 */
char *_strchr(char *s, char c)
{
	do {

	if (*s == c)
		return (s);
	} while (*s++);

	return (0);
}
