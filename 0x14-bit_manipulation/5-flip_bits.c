#include "main.h"
/**
 * flip_bits - this is a function
 * @n: this is a parameter
 * @m: this is a parameter
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int excl = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = excl >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
