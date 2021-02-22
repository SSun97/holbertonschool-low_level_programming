#include "holberton.h"
/**
 * _strlen - get the length of a string
 * @q: tyoe char*
 * Return: int.
 */
int _strlen(char *q)
{
	int i = 0;

	while (q[i] != '\0')
		i++;
	return (i);
}
/**
 * infinite_add - add two string
 * @n1: type char *
 * @n2: type char *
 * @r: type char *
 * @size_r: type int
 * Return: r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = _strlen(n1) - 1, j = _strlen(n2) - 1, k = 0, carry = 0;

	while (i >= 0 || j >= 0 || carry != 0)
	{
		if (i >= 0)
			carry += n1[i--] - '0';
		if (j >= 0)
			carry += n2[j--] - '0';
		r[k++] = carry % 10 + '0';
		carry /= 10;
	}
	r[k] = '\0';

	i = 0;
	j = k - 1;
	while (i < j)
{
		char c = r[i];

		r[i] = r[j];
		r[j] = c;
		i++;
		j--;
	}
	if (_strlen(r) >= size_r)
		return (0);
	return (r);
}
