#include "main.h"
/**
 * factorial - this is a function that returns the factorial of a given number
 * @n: this is the given number
 * Return: is n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		n = 1;
	}
	else
	{
		n = n * factorial(n - 1);
	}
	return (n);
}
