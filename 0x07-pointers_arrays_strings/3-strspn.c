/**
 * _strspn - Return the length of the maximum initial segment
 *		of S which contains only characters in ACCEPT.
 * @s: type char *
 * @accept: type char *
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	char c, *p, *s1;

	for (s1 = s, c = *s1; c != 0; s1++, c = *s1) {
		for (p = accept; *p != 0; p++) {
			if (c == *p) {
				goto next;
			}
		}
		break;
	next:;
	}
	return (s1 - s);
}
