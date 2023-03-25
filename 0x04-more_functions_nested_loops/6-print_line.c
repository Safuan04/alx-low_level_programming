#include "main.h"
/**
 * print_line - this is a function to print lines
 * @n: this is a parameter
 */
void print_line(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (n < 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
