#include "main.h"
/**
 * print_number - this is a function that prints a number
 * @n: this is a parameter
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar (45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
