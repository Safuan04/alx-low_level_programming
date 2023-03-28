#include "main.h"
/**
 * print_rev - this is a function that prints the arrays in reverse
 * @s: this is a parameter
 */
void print_rev(char *s)
{
	int i;
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (i = count ; i > 0 ; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
