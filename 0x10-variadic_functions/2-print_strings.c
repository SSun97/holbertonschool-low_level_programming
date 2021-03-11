#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print string
 * @separator: tyoe const char
 * @n: unsigned const int
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	char *tmp;

	if (separator == NULL || *separator == '\0')
		return;
	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		tmp = va_arg(p, char *);

		if (*tmp == '\0' || tmp == NULL)
			printf("(nil)");
		else
			printf("%s", tmp);
		if (i < (n - 1))
			printf("%s", separator);
	}
	va_end(p);
	printf("\n");

}
