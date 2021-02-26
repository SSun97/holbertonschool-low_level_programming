/**
 * wildcmp - check the code for Holberton School students.
 * @s1:
 * @s2:
 * Return: Always 0.
 */



int wildcmp(char *s1, char *s2)
{
	if (*s1 != *s2 && *s2 != '*')
		return (0);
	if (*s1 == *s2 && *s1 != '*')
	{
		if (*(s1 + 1) == *(s2+1))
		return (wildcmp(s1 + 1, s1 + 2));
	}
	if (*s1 != *s2 && *s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		else if (*(s1 + 1) != *(s2 + 1))
			return (wildcmp(s1 + 1, s2));
		else if (*(s2 + 1) != '*')
			return (wildcmp(s1 + 1, s2));
	}

	if (*s1 == '\0' && *s2 != '\0')
	{
		if (*s2 == '*')
			return (wildcmp(s1, s2 + 1));
	}
	if (*s2 == '\0')
		return (1);
}
