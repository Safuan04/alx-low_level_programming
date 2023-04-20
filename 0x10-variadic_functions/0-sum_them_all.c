#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - this is a functions that adds the arguments of a vard func
 * @n: this is the number of args;
 * Return: this is sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int i, sum = 0;

	va_start(add, n);

	for (i = 0; i < n; i++)
	{
		sum = sum +  va_arg(add, int);
	}
	va_end(add);
	return (sum);
}
