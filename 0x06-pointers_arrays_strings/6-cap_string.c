/**
 * cap_string - change the word's first lowercase to upper case
 * _ismark - see if the char is a mark or not
 * @b: char type
 * @s: type char *
 * Return: char *.
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



char *cap_string(char *s)
{
	char *a, *c;

	c = s;	
	a = s;
	while (*c != '\0')
	{
		if (*c == '\t')
			*c = ' ';
		c++;
	}

	while (*a != '\0')
	{
		if (_ismark(*a))
		{
			if (*(a + 1) >= 'a' && *(a + 1) <= 'z')
				*(a+1) = *(a+1) - 32;
		}
		a++;
	}

	return (s);
}
