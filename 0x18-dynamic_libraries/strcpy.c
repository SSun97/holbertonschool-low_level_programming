/**
 * _strcpy - copy the string
 * @dest: type char*
 * @src: type char *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (p);
}



