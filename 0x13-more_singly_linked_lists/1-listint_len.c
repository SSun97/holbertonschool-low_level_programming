#include <stdio.h>
#include "lists.h"

/**
 * listint_len - get the number of how many nodes on this list
 * @h: pointer point to the head of the list
 * Return: the number of how many nodes on this list
 *
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
