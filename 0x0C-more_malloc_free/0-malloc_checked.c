#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(0);
	return (p);


}

