#include "main.h"
/**
 * puts2 - this is a function that print an array and skip the next
 * @str: this is a parameter
 */
void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
