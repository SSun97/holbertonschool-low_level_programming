/**
 * pd - check if the string is palindrome
 * @s: char *
 * @low: int
 * @high: int
 * @length: int
 * Return: int
*/

int pd(char *s, int low, int high, int length)
{
	if (length == 0 || length == 1)
		return (1);
	if (s[low] != s[high])
		return (0);
	return (pd(s, low + 1, high - 1, length - 2));


}

/**
 * _strlen - get the length of a string
 * @s: type char
 * Return: int
*/

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));

}
/**
 * is_palindrome - check if the string is palindrome
 * @s: type char
 * Return: int
*/
int is_palindrome(char *s)
{
	int length = _strlen(s);

	if (length == 0 || length == 1)
		return (1);
	else
		return (pd(s, 0, length - 1, length));

}



