/**
 * _strlen_recursion - get the length of a string
 * @s: type char *
 * Return: n if the string is not empty, otherwise 0
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
		return (0);


	n = 1 + _strlen_recursion(s + 1);
		return (n);



}
