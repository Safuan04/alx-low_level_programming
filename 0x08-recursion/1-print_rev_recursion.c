#include "main.h"
/**
 * _print_rev_recursion - this is a function that printsa string in reverse
 * @s: this is a paremeter
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
