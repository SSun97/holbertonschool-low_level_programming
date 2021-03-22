#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node on the link list
 * @head: pointer which point to the head node of link list
 * @index: the nth node number
 * Return: pointer to the nth node, otherwise NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nth_node = head;

	if (head == NULL)
		return (NULL);

	while (index && nth_node->next)
	{
		index--;
		nth_node = nth_node->next;
	}
	if (index > 0)
		return (NULL);

	return (nth_node);
}
