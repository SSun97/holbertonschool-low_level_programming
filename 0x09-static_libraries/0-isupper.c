/**
 * _isupper - check if the character is uppercase
 * @c: type int
 * Return: 1 if it is uppercase, 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
