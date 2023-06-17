#include "lists.h"

/**
 * print_dlistint - this is a function that prints all
 * @h: this is a parameter
 * Return: should return n
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->i);
		h = h->next;
		i++;
	}
    
	return (i);
}
