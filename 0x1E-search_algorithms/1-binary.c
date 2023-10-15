#include "search_algos.h"
/**
 * printing - this is a function that prints the array
 * @array: is a pointer to the first element of the array to search in
 * @backward: search in mid left
 * @forward: search in mid right
*/
void printing(int *array, int backward, int forward)
{
	int i;

	printf("Searching in array: ");

	for (i = backward; i <= forward; i++)
	{
		if (i < forward)
		{
			printf("%d, ", array[i]);
		}
		else
		{
			printf("%d", array[i]);
		}
	}
	printf("\n");
}

/**
 * binary_search - a function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array:  is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the value we are searching for
*/
int binary_search(int *array, size_t size, int value)
{
	int mid;
	int backward = 0;
	int forward = size - 1;

	if (array == NULL)
		return (-1);

	while (backward <= forward)
	{
		printing(array, backward, forward);

		mid = (backward + forward) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] < value)
		{
			backward = mid + 1;
		}
		if (array[mid] > value)
		{
			forward = mid - 1;
		}
	}

	return (-1);
}
