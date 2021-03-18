#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - Print the link list
 * @h: the pointer of node passed in
 * Return: the number of nodes on the list
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
