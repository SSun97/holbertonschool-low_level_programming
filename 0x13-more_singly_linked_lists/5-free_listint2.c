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
	listint_t *p;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			p = *head;
			*head = (*head)->next;
			free(p);
		}
		*head = NULL;
	}
}
