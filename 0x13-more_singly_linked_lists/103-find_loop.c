#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - check if the link list has a loop
 * @head: pointer to the head node
 * Return: The address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one_step, *two_steps;

	if (head == NULL)
		return (NULL);

	one_step = head;
	two_steps = head;
	while (two_steps && two_steps->next)
	{
		one_step = one_step->next;
		two_steps = two_steps->next->next;
		if (one_step == two_steps)
			return (one_step);
	}
		return (NULL);
}
