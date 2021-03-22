#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - insert node at idx position on link  list
 * @index: unsigned int
 * @head: double pointer
 * Return: 0 for success, -1 for fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = NULL;
	listint_t *node_to_del = NULL;

	if (*head == NULL)
		return (-1);
	prev = *head;
	node_to_del = (*head)->next;

	if (index == 0)
	{
		*head = (*head)->next;
		free(prev);
	}
	else
	{
		while (index - 1)
		{
			index--;
			prev = node_to_del;
			node_to_del = prev->next;
			if (node_to_del == NULL)
				return (-1);
		}
		prev->next = node_to_del->next;
		free(node_to_del);
	}
	return (0);
}
