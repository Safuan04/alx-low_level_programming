#include "main.h"
#include <math.h>
/**
 * binary_to_uint - this is a function that converts a binary num to a dec
 * @b: this is a parameter
 * Return: is rslt
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int dec = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec = dec * 2 + (b[i] - '0');
	}
	return (dec);
}
