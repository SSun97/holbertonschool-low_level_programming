/**
 * _strncpy - copy string
 * @dest: type char*
 * @src: type char*
 * @n: type int
 * Return: type char*.
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *x;
	char *y;
	char *z;
	int i = 0;
	int j;

	x = dest;
	y = src;
	z = src;

	for (j = 0; *z != '\0'; j++)
		z++;

	while (*y != '\0' && i < n)
	{
		*x++ = *y++;
		i++;
	}
	if (j <= n)
		*x = '\0';

	return (dest);

}
