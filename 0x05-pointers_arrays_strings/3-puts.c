#include "main.h"
/**
 * _puts - this is a function that prints the srting
 * @str: this is a parameter
 */
void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
