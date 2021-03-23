#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - safely printing the link list
 * @head: point to the head of link list
 * Return: the number of node on the list, otherwise exit 98
 */
size_t print_listint_safe(const listint_t *head)
{

	int i = 0, j;
	const listint_t *p = head;
	const listint_t *arr[1024] = {NULL};

	while (p)
	{
		arr[i] = p;
		printf("[%p] %d\n", (void *)p, p->n);
		i++;
		p = p->next;
		for (j = 0; j < i; j++)
		{
			if (arr[j] == p)
			{
				printf("-> [%p] %d\n", (void *)p, p->n);
				exit(98);
			}
		}
	}
	return (i);
}
