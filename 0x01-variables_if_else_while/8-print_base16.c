#include <stdio.h>
/**
 * main - is a function
 * Return: should be 0
 */
int main(void)
{
	int n;
	char i;

	for (n = 0 ; n <= 9 ; n++)
	{
		putchar(n + '0');
	}
	for (i = 'a' ; i <= 'f' ; i++)
	{
		putchar(i);
	}
		putchar('\n');

	return (0);
}
