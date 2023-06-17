#include "lists.h"

/**
 * get_dnodeint_at_index - this is a function
 * @head: parameter
 * @index: parameter
 * Return: temp
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	if (index == 0)
		return (head);

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (!temp)
		return (NULL);

	return (temp);
}
