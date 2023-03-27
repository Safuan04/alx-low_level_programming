#include "main.h"
/**
 * print_rev - this is a function that prints the arrays in reverse
 * @s: this is a parameter
 */
void print_rev(char *s)
{
	int i;

	/**
	 * for (i = 0 ; s[i] != '\0' ; i++)
	 * {
	 * count++;
	 * }
	 */
	for (i = 63 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
