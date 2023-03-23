#include "main.h"
/**
 * _isupper - this is a function to test if the alphabet is uppercase
 * @c: this is a parameter
 * Return: should be 1 or 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
