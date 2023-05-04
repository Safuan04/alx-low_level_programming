#include "main.h"
/**
 * set_bit - this is a function that sets the value of a bit to 1 at a giv ind
 * @n: this is a parameter
 * @index: this is a parameter
 * Return: this is 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
