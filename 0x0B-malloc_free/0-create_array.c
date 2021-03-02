#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array and set the value as c
 * @size: type unsigned int
 * @c: type char
 *
 * Return: NULL if size is 0 or fail to allocate the memory,
 *	 otherwise return the pointer.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *buffer;

	if (size == 0)
		return (NULL);

	buffer = malloc(size * sizeof(char));

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		buffer[i] = c;

	return (buffer);

}
