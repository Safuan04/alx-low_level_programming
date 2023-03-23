#include "main.h"
/**
 * _isdigit - this is a function to test if there is a digit
 * @c: this is a parameter
 * Return: this should be 1 or 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
