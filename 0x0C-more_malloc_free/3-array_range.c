#include <stdlib.h>
/**
 * array_range - prints from min to max
 * @min: type int
 * @max: type int
 *
 * Return: a pointer or NULL.
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= max - min + 1; i++)
		*(p + i) = min + i;

	return (p);
}
