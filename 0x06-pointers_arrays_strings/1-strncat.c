/**
 * _strncat - concatnate two strings
 * @dest: type char*
 * @src: type char*
 * @n: type int
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *s;
	char *q;
	int i = 0;

	s = dest;
	q = src;

	while (*s != '\0')
		s++;
	do {
		*s = *q;
		s++;
		q++;
		i++;

	} while (*q != '\0' && i < n);

	*s = '\0';

	return (dest);
}
