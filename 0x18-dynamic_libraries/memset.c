/**
 * _memset - fill the memory
 * @s: type char *, the address of passed array
 * @b: the content passed in
 * @n: the first n memory locations to be filled
 * Return: s, the address of the changed array.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
