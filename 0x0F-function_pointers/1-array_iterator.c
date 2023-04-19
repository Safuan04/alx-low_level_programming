#include "function_pointers.h"
/**
 * array_iterator - this is a function
 * @array: this is a parameter
 * @size: this is a parameter
 * @action: this is a parameter as a function
 * Return: is null
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	return;

	for (i = 0; i <= size; i++)
		action(array[i]);
}
