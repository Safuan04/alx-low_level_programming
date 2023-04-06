#include "main.h"
/**
 * _pow_recursion - this a function that calculate the power
 * @x: this is a parameter
 * @y: this is also a parameter
 * Return: this is x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{return (-1); }
	else if (y == 0)
	{return (1); }

	return (x * _pow_recursion(x, y - 1));
}
