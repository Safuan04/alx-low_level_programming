#include "main.h"
/**
 *print_alphabet_x10 - this is a function
 */

void print_alphabet_x10(void)
{
	char a;
	int n;

	for (n = 1 ; n <= 10 ; n++)
	{
		for (a = 'a' ; a <= 'z' ; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
