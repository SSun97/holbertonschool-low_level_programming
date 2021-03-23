#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint_safe - safely free the link list
 * @h: point to the head of link list
 * Return: the number of node on the list, otherwise exit 98
 */
size_t free_listint_safe(listint_t **h)
{

	int i = 0, j;
	const listint_t *p = *h;
	const listint_t *arr[1024] = {NULL};

	while (p)
	{
		arr[i] = p;
		i++;
		p = p->next;
		free((void *)arr[i]);
		arr[i] = NULL;
		for (j = 0; j < i; j++)
		{
			if (arr[j] == p)
				break;
		}
	}
	return (i);
}
