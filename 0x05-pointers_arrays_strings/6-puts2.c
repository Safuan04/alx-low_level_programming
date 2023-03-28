#include "main.h"
/**
 * puts2 - this is a function that print an array and skip the next
 * @str: this is a parameter
 */
void puts2(char *str)
{
	int i;
	int t = 0;
	char *y = str;
	int l = 0;

	while (*y != '\0')
	{
		y++;
		l++;
	}
	t = l - 1;
	for (i = 0 ; i <= t ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
