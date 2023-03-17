#include <stdio.h>
/**
 * main - this is a function
 *
 * Return: it should be 0
 */

int main(void)
{
	char I;
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		putchar(i);
	}
	for (I = 'A' ; I <= 'Z' ; I++)
	{
		putchar(I);
	}

	putchar('\n');

	return (0);
}
