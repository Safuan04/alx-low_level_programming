#include "main.h"
/**
 * print_last_digit - this is a function
 * @n: this is a parameter
 * Return: it is i
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
	{
		i = -(i);
	}
	_putchar(i + '0');

	return (i);
}
