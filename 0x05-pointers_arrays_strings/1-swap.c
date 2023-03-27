#include "main.h"
/**
 * swap_int - this is a function that swaps numbers
 * @a: this is a parameter
 * @b: this is a parameter
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
