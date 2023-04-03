#include "main.h"
/**
 * _memset - this is a function that fills a memory
 * @s: this is a parameter
 * @b: this is a parameter
 * @n: this is a parameter
 * Return: this is s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
