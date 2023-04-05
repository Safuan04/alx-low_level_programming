#include "main.h"
/**
 * _puts_recursion - this is a function that print strings
 * @s: this is a parameter
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else 
	{
		_putchar(*s);
                _puts_recursion(s + 1);
	}
}
