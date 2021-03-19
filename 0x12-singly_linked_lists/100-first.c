#include <stdio.h>
#include "lists.h"
/**
 * first - print before main execute
 * Return: void
 */

void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
