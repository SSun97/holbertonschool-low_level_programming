/**
 * _ismark - see if the char is a mark or not
 * @b: char type
 * Return: int.
 */
int _ismark(char b)
{
	int i;
	char array[14] = { ',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\t', '\n', ' ', '\0' };

	for (i = 0; i < 14; i++)
	{
		if (b == array[i])
			break;
		else if (array[i] == '\0')
			return (0);
	}

	return (1);
}
/**
 * cap_string - change the word's first lowercase to upper case
 * @s: type char *
 * Return: char *.
 */


char *cap_string(char *s)
{
	char *a, *c;

	a = s;
	while (*a != '\0')
	{
		if (_ismark(*a))
		{
			if (*(a + 1) >= 'a' && *(a + 1) <= 'z')
				*(a + 1) = *(a + 1) - 32;
		}
		a++;
	}

	return (s);
}
