#include "main.h"
/**
 * _isalpha - this is a function
 *
 * @c: this is a parameter
 *
 * Return: it should be 1 in this case
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
