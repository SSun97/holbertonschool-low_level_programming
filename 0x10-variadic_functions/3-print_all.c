#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print all elements
 * @format: const char * const
 *
 */
void print_all(const char * const format, ...)
{
	va_list p;
	int i, x = 0;
	char *str;

	va_start(p, format);
	while (format && *(format + x) != '\0')
	{
		switch (*(format + x++))
		{
		case 'c':
			printf("%c", va_arg(p, int));
			break;
		case 'i':
			i = va_arg(p, int);
			printf("%d", i);
			break;
		case 'f':
			printf("%f", va_arg(p, double));
			break;
		case 's':
			str = va_arg(p, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
			printf("%s", str);
			break;
		default:
			break;
		}
		if (*(format + x) != '\0' && (*(format + x - 1) == 'c'
				|| *(format + x - 1) == 'i' ||
				*(format + x - 1) == 'f' || *(format + x - 1) == 's'))
			printf(", ");
	}
	va_end(p);
	printf("\n");
}
