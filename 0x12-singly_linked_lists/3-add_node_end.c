#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - add new note to the link list
 * @head: type list_t **
 * @str: type char * the name string passed in
 * Return: the pointer to the head node
 */
list_t *add_node(list_t **head, char *str)
{
	char *p = str;
	int i;
	list_t *newNode;

	for (i = 0; *p != '\0'; i++)
		p++;
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = i;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}



/**
 * add_node_end - add new note to the link list
 * @head: type list_t **
 * @str: type char * the name string passed in
 * Return: the pointer to the head node
 */
list_t *add_node_end(list_t **head, char *str)
{
	char *p = str;
	int i;
	list_t *newNode, *tail;

	if (*head == NULL)
		add_node(head, str);
	else
	{
		for (i = 0; *p != '\0'; i++)
			p++;
		tail = *head;
		newNode = malloc(sizeof(list_t));
		if (newNode == NULL)
			return (NULL);
		while (tail->next)
		{
			tail = tail->next;
		}
		newNode->str = strdup(str);
		newNode->len = i;
		tail->next = newNode;
	}

	return (*head);
}
