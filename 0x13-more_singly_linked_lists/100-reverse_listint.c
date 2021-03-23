#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverse the link list
 * @head: pointer to the head node
 * Return: the head node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre, *cur;

	pre = *head;
	cur = NULL;
	if (*head == NULL)
		return (NULL);
	while (pre)
	{
		listint_t *tmp = pre->next;

		pre->next = cur;
		cur = pre;
		pre = tmp;
	}
	*head = cur;
	return (cur);
}
