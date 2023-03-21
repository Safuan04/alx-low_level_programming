#include <stdio.h>
/**
 *main - this is a function
 *Return: it is 0
 */
int main(void)
{
	int n;
	int i;
	int c;

	for (n = 0 ; n <= 9 ; n++)
	{
		for (i = 1 ; i <= 9 ; i++)
		{
			for (c = 2 ; c <= 9 ; c++)
			{
				if (n < i && i < c)
				{
					putchar(n + '0');
					putchar(i + '0');
					putchar(c + '0');
					if (n + i + c != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
