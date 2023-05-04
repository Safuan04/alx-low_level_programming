#include "main.h"
/**
 * clear_bit - this is a function
 * @index: this is a parameter
 * @n: this is parameter
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
