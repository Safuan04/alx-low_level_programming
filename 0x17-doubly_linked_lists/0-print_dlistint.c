#include "lists.h"

/**
 * print_dlistint - this is a function that prints all
 * @h: this is a parameter
 * Return: should return n
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}

	return (n);
}
