/**
 * _atoi - check the code for Holberton School students.
 * @s: type pointer
 * Return: tyoe int.
 */


int _atoi(char *s)
{
	char *p = s;
	unsigned int i = 0;
	unsigned int digit;
	int sign = 1;
	char *c = s;

	while (*c != '\0')
	{
		if (*c < '0' || *c > '9')
			c++;
		else
			break;
	}
	if (*c == '\0')
		return (i);


	while (*p < '0' || *p > '9')
	{
		if (*p == '-')
			sign = sign * (-1);

		p += 1;
	}
	for ( ; ; p += 1)
	{
		digit = *p - '0';
		if (digit > 9)
			break;

		i = 10 * i + digit;

	}
	if (sign == -1)
	{
		return (-i);

	}
	return (i);
}
