
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - print the int numbers of link list
 * @h: the pointer point to the head of link list
 * Return: how many nodes within this link list.
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *p = h;

	while (p)
	{
		printf("%d\n", p->n);
		i++;
		p = p->next;
	}
	return (i);
}
