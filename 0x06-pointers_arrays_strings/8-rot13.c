/**
* rot13 - output string into rot13
* @a: type char *
* Return: char.
*/


char *rot13(char *a)
{
	char e[52] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
			'j', 'k', 'l', 'm',
			 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
			 'w', 'x', 'y', 'z',
			 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
			 'J', 'K', 'L', 'M',
			 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
			 'W', 'X', 'Y', 'Z' };
	char l[52] = { 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
			 'w', 'x', 'y', 'z',
			'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
			 'j', 'k', 'l', 'm',
			'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
			 'W', 'X', 'Y', 'Z',
			'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
			 'J', 'K', 'L', 'M'};
	int i;
	char *u;

	u = a;

	while (*u != '\0')
	{

		for (i = 0; i < 52; i++)
		{
			if (*u == e[i])
			{
				*u = l[i];
				break;
			}
		}
		u++;
	}
	return (a);
}
