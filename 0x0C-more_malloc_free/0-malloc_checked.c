#include <stdlib.h>
/**
 * malloc_checked - allocate the space
 * @b:unsigned int
 * Return: type void pointer.
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);


}

