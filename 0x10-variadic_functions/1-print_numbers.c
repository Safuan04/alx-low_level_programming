#include "variadic_functions.h"
/**
 * print_numbers - this is a function that prints numbers
 * @separator: this is a separator between numbers
 * @n: this is the number of arg to be printed
 * Return: null
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pr;
	unsigned int i, x;

	va_start(pr, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(pr, int);
		printf("%d", x);

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(pr);
}
