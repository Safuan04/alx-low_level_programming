#include "main.h"
/**
 * _strchr - this is a function that locates a character in a string
 * @s: this is a parameter
 * @c: this is a parameter
 * Return: this returns c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
