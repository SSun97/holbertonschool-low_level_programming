/**
 * rev_string - reverse print a string
 * @s: type pointer
 *
 */
void rev_string(char *s)
{
	char *p = s;

	while (*(p + 1) != '\0')
		p++;

	while (p > s)
	{
		*p = *p ^ *s;
		*s = *p ^ *s;
		*p = *p ^ *s;
		p--;
		s++;
	}

}
