#include "main.h"
/**
 * print_most_numbers - this is a function to print numbers
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		_putchar(n + '0');
	}
	_putchar('\n');
}
