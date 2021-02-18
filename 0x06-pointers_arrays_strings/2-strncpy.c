/**
 * _strncpy - copy string
 * @dest: type char*
 * @src: type char*
 * @n: type int
 * Return: type char*.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);

}
