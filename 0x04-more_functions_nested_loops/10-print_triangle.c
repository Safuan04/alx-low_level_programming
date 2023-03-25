#include "main.h"
/**
 * print_triangle - this is a function that prints triangles
 * @size: this is a parameter
 */
void print_triangle(int size)
{
	int row;
	int space;
	int hashe;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (row = 1 ; row <= size ; row++)
	{
		for (space = size - row ; space >= 1 ; space--)
		{
			_putchar(' ');
		}
		for (hashe = 1 ; hashe <= row ; hashe++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
