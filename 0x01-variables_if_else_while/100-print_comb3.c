#include <stdio.h>
/**
 * main - this is a function
 * Return: it is 0
 */

int main(void)
{
	int n;
	int i;

	for (n = 0 ; n <= 9 ; n++)
	{
		for (i = 1 ; i <= 9 ; i++)
		{
			if (n < i && n != i)
			{
				putchar(n + '0');
				putchar(i + '0');

				if (n + i != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar ('\n');

	return (0);
}

