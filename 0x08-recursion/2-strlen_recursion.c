#include "main.h"
/**
 * _strlen_recursion - this is a function that count the lenght of a string
 * @s: this is a parameter
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len += _strlen_recursion(s + 1) + 1;
	}
	return (len);
}
