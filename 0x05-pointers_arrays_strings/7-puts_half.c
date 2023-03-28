#include "main.h"
/**
 * puts_half - this is a function that prints the second half of the arrays
 * @str: this is a parameter
 */
void puts_half(char *str)
{
	int i, n, l;

	l = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		l++;
	}

	n = (l / 2);

	if ((l % 2) == 1)
	{
		n = ((l + 1) / 2);
	}
	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
