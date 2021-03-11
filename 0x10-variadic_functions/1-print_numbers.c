#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - print the numbers.
 * @separator: type const char
 * @n: type const unsigned int
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i = 0;

	if (separator == NULL)
                return;
	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (i < (n - 1))
		printf("%s", separator);
	}
	printf("\n");
	va_end(p);

}
