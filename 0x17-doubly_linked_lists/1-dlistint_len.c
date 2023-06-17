#include "lists.h"

/**
 * dlistint_len - this is i a func of element in a doubly linked list
 * @h: pointer to the head of the linked list
 * Return: cntr
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t cntr = 0;

	while (h)
	{
		cntr++;
		h = h->next;
	}

	return (cntr);
}
