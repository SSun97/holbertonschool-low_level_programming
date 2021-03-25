#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - free the memory of list start from head
 * @head: pointer to the starting point of a link list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *p = *head;

	if (*head == NULL)
		return;
	while (p)
	{
		p = p->next;
		free(*head);
		*head = p;
	}
	*head = NULL;
}
