#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - delete the first node on the link list
 * @head: point to the first node on the list
 * Return: n of the first node, otherwise 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int a;

	if (*head == NULL)
		return (0);
	a = tmp->n;
	tmp = tmp->next;
	free(*head);
	*head = tmp;
	return (a);
}

