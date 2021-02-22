#include <stdio.h>
/**
 * print_buffer - print the buffer
 * @b: type char*
 * @size: type int
 */
void print_buffer(char *b, int size)
{
	char *p;
	char *q;
	int i, j, a;

	p = b;
	q = b;
	for (i = 0, a = 0; i < (size-1) / 10 + 1; i++, a = a + 10)
	{
		printf("%08x:", a);

		for (j = 0; j < 10; j++, p++)
		{
			if (j % 2 == 0)
				printf(" ");

			if (i * 10 + j > size - 1)
				printf("  ");
			else
				printf("%02x", *p);
		}
		printf(" ");

		for (j = 0; j < 10; j++, q++)
		{
			if (*q >= 32 && *q <= 122)
				printf("%c", *q);
			else
				printf(".");
			if (i * 10 + j > size - 2)
				break;
		}
		printf("\n");
	}
}
