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
int i;	
int j;
i = 0;

while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
