#include "lists.h"

/**
 * insert_dnodeint_at_index - is a func that inserts new node
 * @h: Double pointer 
 * @idx: Index
 * @n: new node
 * Return: new_node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *h;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (!temp)
		return (NULL);
	new_node->next = temp->next;
	temp->next = new_node;
	new_node->prev = temp;

	if (new_node->next)
		new_node->next->prev = new_node;

	return (new_node);
}
