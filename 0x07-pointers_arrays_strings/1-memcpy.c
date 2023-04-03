#include "main.h"
/**
 * _memcpy - this is a function that copies memory areas
 * @dest: this is a parameter
 * @src: this is a parameter
 * @n: this is a parameter
 * Return: this is dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
