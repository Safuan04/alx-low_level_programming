#include "main.h"
/**
 * _strlen - this is a function that count the arrays of a srting
 * @s: this is a parameter
 * Return: this is count
 */
int _strlen(char *s)
{
	int i;
	int count;

	count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		count++;
	}
	return (count);
}
