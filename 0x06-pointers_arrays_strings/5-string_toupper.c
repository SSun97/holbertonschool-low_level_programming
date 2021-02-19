/**
 * string_toupper - check the code for Holberton School students.
 * @s: type char *
 * Return: char *
 */
char *string_toupper(char *s)
{
	char *i;

	i = s;
	while (*i != '\0')
	{
		if (*i >= 'a' && *i <= 'z')
			*i = *i - 32;
		i++;
	}

	return (s);
}
