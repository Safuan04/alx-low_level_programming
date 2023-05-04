#include "main.h"
/**
 * get_bit - this is a function that returns the value of a bit at a given ind
 * @n: this is a parameter
 * @index: this is a parameter
 * Return: is bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
