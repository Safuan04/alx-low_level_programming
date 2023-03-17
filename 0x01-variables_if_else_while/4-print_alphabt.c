#include <stdio.h>
/**
 * main - this is a function
 *
 * Return: this should be 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		if (i != 'e' && i != 'q')
		{
		putchar(i);
		}
	}
		putchar('\n');

	return (0);
}
