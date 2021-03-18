#include <stdlib.h>
#include "lists.h"
/**
 * list_len - print the number of nodes on the list
 * @h: the head node of a list
 * Return: number count.
 */

size_t list_len(list_t *h)
{
	size_t count = 0;
	list_t *move = h;

	if (move == NULL)
		return (count);
	while (move)
	{
		count++;
		move = move->next;
	}
	return (count);
}



