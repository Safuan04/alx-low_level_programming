#include "lists.h"

/**
 * sum_dlistint - this is a func that adds sum of all data in dlinked list
 * @head: Parameter
 * Return: sum
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
