#include "search_algos.h"
/**
 * linear_search - a function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index of the value searched if found
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}

	if (array == NULL || value != array[i])
	{
		return (-1);
	}

	return (0);
}
