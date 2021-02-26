/**
 * _strpbrk - locates the first occurrence in the string s of any
 *		 of the bytes in the string accept
 * @s: type char *
 * @accept: type char *
 * Return: s other with 0.
 */
char *_strpbrk(char *s, char *accept)
{
	char c, *p;

	for (c = *s; c != 0; s++, c = *s)
	{
		for (p = accept; *p != 0; p++)
		{
			if (c == *p)
				return (s);
		}
	}
	return (0);
}
