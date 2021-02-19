/**
* leet - output string into leet
* @a: type char *
* Return: char.
*/


char *leet(char *a)
{
	char e[11] = { 'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L' };
	char l[10] = { '4', '3', '0', '7', '1', '4', '3', '0', '7', '1' };
	int i;
	char *p;

	p = a;

	while (*p != '\0')
	{

		for (i = 0; i < 10; i++)
		{
			if (*p == e[i])
			{
				*p = l[i];
				break;
			}
		}
		p++;
	}
	return (a);
}
