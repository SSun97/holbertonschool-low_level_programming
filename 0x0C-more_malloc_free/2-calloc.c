#include <stdlib.h>
/**
 * _calloc - open a space and put 0 to every block
 * @nmemb: type unsigned int
 * @size: type unsigned int
 *
 * Return: a pointer, otherwise NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
/*		nmemb = size = 1;*/
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(p + i) = 0;
	return (p);

}
