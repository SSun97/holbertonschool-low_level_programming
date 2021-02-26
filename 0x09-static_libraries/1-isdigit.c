/**
 * _isdigit - check if a character is digit
 * @c: type int
 *
 * Return: 1 if a character is digit, 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
