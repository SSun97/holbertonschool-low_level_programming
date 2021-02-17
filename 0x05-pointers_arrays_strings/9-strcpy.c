/**
 * _strcpy - copy the string
 * @dest: type char*
 * @src: type char *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{	
	int i;
	
	if (dest == '\0')
		return ('\0');

	*dest = *src;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	*(dest + i + 1) = '\0';



	return (dest);
}



