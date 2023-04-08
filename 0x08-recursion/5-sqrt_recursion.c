#include "main.h"
/**
 * _sqrt_recursion -  this is a function that returns the natural sqaure root
 * _find_recursion - this is a function that gives a value to the  parameter
 * @n: this is a parameter
 * @i: this is a parameter
 * Return: this is i
 */
int _find_recursion(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if  (i * i < n)
	{
		return (_find_recursion(n, i + 1));
	}
	else
		return (-1);
}
int _sqrt_recursion(int n)
{
	return (_find_recursion(n, 1));
}
