#include "function_pointers.h"
/**
 * int_index - this is a functions that return the first index
 * @array: this is a parameter
 * @size: this is a parameter
 * @cmp: this is a parameter that refers to function
 * Return: is i
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
