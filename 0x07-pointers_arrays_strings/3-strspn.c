/**
 * _strspn - Return the length of the maximum initial segment
 *		of S which contains only characters in ACCEPT.
 * @s: type char *
 * @accept: type char *
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	char *p;
	unsigned int n = 0;

	for ( ; *s; s++, n++)
	{
		for (p = accept; *p && (*p != *s); s++)
		{
		}
		if (*s == '\0')
			return (n);
	}

	return (n);

}
