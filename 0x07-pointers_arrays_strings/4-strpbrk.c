/**
 * _strpbrk - locates the first occurrence in the string s of any
 *		 of the bytes in the string accept
 * @s: type char *
 * @accept: type char *
 * Return: s other with 0.
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	for (; *s; s++)
	{
		for (p = accept; *p && (*s != *p); p++)
		{
			if (*s == *p)
				break;
		}
		if (*s == *p)
			break;
	}
	return (s);
}

