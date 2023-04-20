#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - this is a function that prints strings
 * @separator: this is a string between strings
 * @n: this is the number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *x;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(str, char*);
		if (x == NULL)
		{
			printf("nil");
		}
		else
			printf("%s", x);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(str);
}
