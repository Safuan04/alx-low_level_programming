#include "search_algos.h"
/**
 * jump_search - searches for a value in an array of
 * integers using the Jump search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int index, mid, k, backward;

	if (array == NULL || size == 0)
		return (-1);

	mid = (int)sqrt((double)size);
	k = 0;
	backward = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		k++;
		backward = index;
		index = k * mid;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", backward, index);

	for (; backward <= index && backward < (int)size; backward++)
	{
		printf("Value checked array[%d] = [%d]\n", backward, array[backward]);
		if (array[backward] == value)
			return (backward);
	}
	return (-1);
}
