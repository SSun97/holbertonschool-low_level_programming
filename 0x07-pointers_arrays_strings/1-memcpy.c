/**
 * _memcpy - copy the content into an array
 * @dest: tyoe char *
 * @src: type char *
 * @n: type unsigned int
 * Return: char *.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
		*(p + i) = *(src + i);


	return (0);
}
