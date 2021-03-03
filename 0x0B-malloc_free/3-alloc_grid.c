#include <stdlib.h>
/**
 * alloc_grid - check the code for Holberton School students.
 * @width: type int
 * @height: type int
 * Return: int **.
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);

}

