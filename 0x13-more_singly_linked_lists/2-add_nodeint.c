#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - add not from head position
 * @head: pointer of the pointer
 * @n: const int
 * Return: newnode, otherwise NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
		if (newnode == NULL)
			return (NULL);
	newnode->next = *head;
	*head = newnode;
	newnode->n = n;

	return (newnode);
}
