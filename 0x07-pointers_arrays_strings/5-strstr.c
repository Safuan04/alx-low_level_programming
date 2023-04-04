#include "main.h"
/**
 * _strstr - this is a function that locates a substring
 * @haystack: this is a parameter
 * @needle: this is a parmeter
 * Return: is a pointer
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}
	return (0);
}

