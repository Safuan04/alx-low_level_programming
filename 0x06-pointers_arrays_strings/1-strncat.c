#include "main.h"
/**
 * _strncat - this is a function that concatinate two strings
 * @dest: this is a parameter
 * @src: this is a parameter
 * @n: this is a parameter
 * Return: this should return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int destl = 0;
	int srcl = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
		destl++;
	}
	for (i = 0 ; src[i] != '\0' ; i++)
	{
		srcl++;
	}
	for (i = 0 ; i < n ; i++)
	{
		dest[destl + i] = src[i];
	}
	return (dest);
}
