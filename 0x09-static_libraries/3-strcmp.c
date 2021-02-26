/**
 * _strcmp - compare two strings
 * @s1: type char*
 * @s2: type char*
 * Return: the difference of ASCII value.
 */
int _strcmp(char *s1, char *s2)
{
	char i = 0;

	while (*(s1 + i) == *(s2 + i))
	{
		if (*(s1 + i) == '\0' && *(s2 + i) == '\0')
			break;
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}
