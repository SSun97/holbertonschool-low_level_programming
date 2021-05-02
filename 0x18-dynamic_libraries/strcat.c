/**
 * _strcat - concatnate two strings
 * @dest: type char*
 * @src: type char*
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	char *s;
	char *q;

	s = dest;
	q = src;

	while (*s != '\0')
		s++;
	do {
		*s = *q;
		s++;
		q++;
	} while (*q != '\0');

	*s = '\0';

	return (dest);
}
