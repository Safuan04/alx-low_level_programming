#include "lists.h"

/**
 * delete_dnodeint_at_index - is a func that del node at a given index
 * @head: Double pointer to the head of dlinked list
 * @index: index of the del
 * Return: 1
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *before = *head;
	dlistint_t *now = NULL;
	unsigned int i = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		temp = (*head)->next;
		if (temp)
			temp->prev = NULL;
		free(*head);
		*head = temp;
		return (1);
	}

	while (before && i < index - 1)
	{
		before = before->next;
		i++;
	}

	if (!before)
		return (-1);

	now = before->next;
	before->next = now->next;

	if (before->next)
		before->next->prev = before;

	free(now);

	return (1);
}
