#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *
 *
 *
 *
 */
int print_list(list_t *h)
{
	int count = 0;
	list_t *move = h;

	while (move)
	{
		count++;
		if (move->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", move->len, move->str);
		move = move->next;
	}

	return (count);
}
