/**
 * _strlen - get the length of a string
 * @s: type pointer
 * Return: int
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != 0; i++)
		s++;

	return (i);
}

