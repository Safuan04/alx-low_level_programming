#include "main.h"
/**
 * rev_string - this is a function that prints arrays in rev
 * @s: this is a parmeter
 */
void rev_string(char *s)
{
	int i;
	int count;

	count = 0;

	for (i = 10 ; s[i] != '\0' ; i++)
	{
		count++;
	}
	for (i = count ; i >= 10 ; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
