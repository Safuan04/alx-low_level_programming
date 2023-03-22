#include "main.h"

/**
 * _islower - this is a function
 *@c: parameter to be printed
 * Return: this should be 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
