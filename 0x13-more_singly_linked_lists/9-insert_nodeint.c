#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at idx position on link  list
 * @idx: unsigned int
 * @head: double pointer
 * @n: integer
 * Return: adress of inserted nodem, otherwise NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp = *head;

	if (*head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
	new_node->n = n;
	while (idx - 1)
	{
		idx--;
		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
