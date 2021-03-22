#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - add node to tail position
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

/**
 * add_nodeint_end - add node to tail position
 * @head: pointer of the pointer
 * @n: const int
 * Return: newnode, otherwise NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *tmp;

	if (*head == NULL)
		*head = add_nodeint(head, n);
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		newnode = malloc(sizeof(listint_t));
			if (newnode == NULL)
				return (NULL);
		newnode->n = n;
		tmp->next = newnode;
	}
	return (newnode);
}
